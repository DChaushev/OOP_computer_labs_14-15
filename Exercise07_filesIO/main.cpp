/* 
 * File:   main.cpp
 * Author: Dimitar
 *
 * Created on May 24, 2015, 11:24 AM
 */

#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>

using namespace std;

string EXAMPLE = "files/example.txt";
string EXAMPLE_2 = "files/example2.txt";

/*
 * C++ provides the following classes to perform output and input of characters to/from files: 
 * 
 * ofstream: Stream class to write on files
 * ifstream: Stream class to read from files
 * fstream: Stream class to both read and write from/to files.
 * 
 * These classes are derived directly or indirectly from the classes istream and ostream.
 * Just like cin and cout. Thus, we can use them the same way:
 */
void simpleTextOutput() {
    ofstream myfileStream(EXAMPLE.c_str());
    /*
     * We can open the file also if we pass it to the constructor:
     * ofstream myfile("files/example.txt");
     */
    //myfileStream.open();
    myfileStream << "OOP computer labs rullz!!!";
    myfileStream.close();
}

void simpleTextInput() {
    ifstream myfile(EXAMPLE.c_str());
    string line;
    //    myfile >> line;
    getline(myfile, line);
    cout << line << endl;
    myfile.close();
}

void writeAndReadText() {

    fstream myfile(EXAMPLE_2.c_str(), ios::out);
    if (myfile.is_open()) {
        myfile << "Line one" << endl;
        myfile << "Line two" << endl;
        myfile << "Line three" << endl;
        myfile.close();
    } else
        cout << "Unable to open file!" << endl;

    myfile.open(EXAMPLE_2.c_str(), ios::in);
    if (myfile.is_open()) {
        string line;
        while (!myfile.eof()) {
            getline(myfile, line);
            cout << line << endl;
        }
        myfile.close();
    } else
        cout << "Unable to open file!" << endl;

}

/*
 * What if the file doesn't exists, and we don't want to create it when writing?
 * 
 * Solution is to first try to open it for reading and check if_open().
 * 
 */

void displayLinesFromFile(string fileName) {
    ifstream myfile(fileName.c_str());
    if (myfile.is_open()) {
        string line;
        while (!myfile.eof()) {
            getline(myfile, line);
            cout << line << endl;
        }
        myfile.close();
    } else
        cout << "Unable to open file!" << endl;
}

void appendToFile() {

    ofstream myfileO(EXAMPLE_2.c_str(), ios::app);
    if (myfileO.is_open()) {
        myfileO << "Line four" << endl;
        myfileO << "Line five" << endl;
        myfileO << "Line six" << endl;
        myfileO.close();
    } else
        cout << "Unable to open file!" << endl;

    displayLinesFromFile(EXAMPLE_2);
}

void problems() {
    vector<const char*> lines;
    string line;

    ifstream myFile(EXAMPLE_2.c_str());

    if (myFile.is_open()) {
        while (!myFile.eof()) {
            getline(myFile, line);
            char * c_line = new char [line.length() + 1];
            strcpy(c_line, line.c_str());
            lines.push_back(c_line);
        }
        myFile.close();
    } else cout << "Unable to open file!" << endl;

    for (int i = 0; i < lines.size(); i++)
        cout << lines[i] << endl;

}

/*
 * FIX:
 *  You need to make a copy of the string:
 * 
 *      Replace const char * c_line = line.c_str();
 *      with:
            char * c_line = new char [line.length() + 1];
            strcpy(c_line, line.c_str());
 * 
 */


int main(int argc, char** argv) {


    simpleTextOutput();
    simpleTextInput();
    writeAndReadText();
    appendToFile();
    problems();

    return 0;
}

