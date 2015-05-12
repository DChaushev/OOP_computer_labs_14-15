Task 1
==============

Напишете клас ___MySorter___, който имплементира дадения интерфейс:

```{cpp}
template<typename T>
class Sorter {
public:
    virtual void sort(T a[], int n, bool descending = false) = 0;
};
```
Kъдето ___a[]___ е масив от тип ___T___, а ___n___ е броят на елементите в този масив.
Булевата променлива ___descending___ указва дали масивът да се сортира в низходящ ред.
По-подразбиране има стойност ___false___. В този случай масивът се сортира във възходящ ред.


Имплементирайте метода ___sort___ да сортира масив чрез:
* ___selection sort___ ( http://en.wikipedia.org/wiki/Selection_sort )

 или

* ___bubble sort___ ( http://en.wikipedia.org/wiki/Bubble_sort )


За да тествате задачата използвайте следния main:
----------
Ако пишете на Visual Studio ще се наложи да #incude-нете \<functional\>, заради std::greater<>(), което използвам за тестване.
```{cpp}
#include <algorithm>
#include <string>
#include <assert.h>

using namespace std;

int main() {

    int intArray[] = {1, 6, 7, 2, -10, 6, 2, 4, 8};
    float floatArray[] = {1.6, 7.6, 9.8, -5.4, -4.2};
    string stringArray[] = {"isdgn", "ghdf", "ghdx", "qasdni", "asdf"};

    int intArrayTest[] = {1, 6, 7, 2, -10, 6, 2, 4, 8};
    float floatArrayTest[] = {1.6, 7.6, 9.8, -5.4, -4.2};
    string stringArrayTest[] = {"isdgn", "ghdf", "ghdx", "qasdni", "asdf"};

    Sorter<int> * sInt = new MySorter<int>();
    Sorter<float> * sFloat = new MySorter<float>();
    Sorter<string> * sString = new MySorter<string>();

    sInt->sort(intArray, 9);
    sFloat->sort(floatArray, 5, true);
    sString->sort(stringArray, 5);

    std::sort(intArrayTest, intArrayTest + 9);
    std::sort(floatArrayTest, floatArrayTest + 5, std::greater<float>());
    std::sort(stringArrayTest, stringArrayTest + 5);
    
    for(int i = 0; i < 9; i++){
        assert(intArray[i] == intArrayTest[i]);
    }
    
    for(int i = 0; i < 5; i++){
        assert(floatArray[i] == floatArrayTest[i]);
    }
    
    for(int i = 0; i < 5; i++){
        assert(stringArray[i] == stringArrayTest[i]);
    }

    cout << "All tests passed!" << endl;

    return 0;
}
```

Щом видите надписа ___"All tests passed!"___, чак тогава може би решението ви е вярно.

