Sorter
==============

Напишете клас ___MySorter___, който имплементира дадения интерфейс:

```{cpp}
template<typename T>
class Sorter {
public:
    virtual void sort(T a[], int n) = 0;
};
```
Kъдето ___a[]___ е масив от тип ___T___, а ___n___ е броя на елементите в този масив.

Имплементирайте метода ___sort___ да сортира масив чрез:
* ___selection sort___ (http://en.wikipedia.org/wiki/Selection_sort)

 или

* ___bubble sort___ ( http://en.wikipedia.org/wiki/Bubble_sort )
