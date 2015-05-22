
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.util.logging.Level;
import java.util.logging.Logger;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 *
 * @author Dimitar
 */
public class Main {

    public static void exceptionExample() throws FileNotFoundException {
        File file = new File("./src/fail.java");
        FileReader r = new FileReader(file);
    }

    public static void main(String[] args) {

        try {
            exceptionExample();
        } catch (FileNotFoundException ex) {
            Logger.getLogger(Main.class.getName()).log(Level.SEVERE, null, ex);
        }

    }

}
