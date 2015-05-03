Task01
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
