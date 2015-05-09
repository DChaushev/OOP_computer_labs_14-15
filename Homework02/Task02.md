#Task 2#
Имплементирайте шаблонен клас ArrayStack, който:

 - Наследява дадения ви интерфейс [Stack](https://github.com/DChaushev/OOP_computer_labs_14-15/tree/master/Homework02/Stack.hpp), като имплементира всички негови методи спрямо коментарите и логиката на абстрактната структура от данни стек.  Хвърляйте специфицираните грешки (exceptions). Компилирайте спрямо C++11 стандарта. Може да се наложи изрично да включите exception-ите при компилация. За да работят те ползвайте:
 
```cpp
#include <stdexcept>;
```
 - Вътрешно ползва обикновен масив , a **НЕ** неща като std::vector.
 
 - Автоматично си променя капацитета така, че да може да побира нужния брой елементи.  За целта ползвайте следните 2 правила:
     - Ако се викне метод push() и няма място във вътрешния масив да се добави новият елемент, сe прави нов масив с 2 пъти по-голям размер (capacity*2) от стария и сe копират всички досегашни елементи. После сe добавя и новият. Не забравяйте да освободите паметта заемана от стария масив ако е нужно.
     - Ако се викне метод pop() и след премахване на най-горния елемент е вярно, че `((double)(size + 1) / capacity) < 0.25`, то се прави нов масив с размер 2 пъти по-малък от текущия (capacity/2) и се копират там съществуващите елементи. Не забравяйте да освободите паметта заемана от стария масив ако е нужно. Забележете cast-a към double на (size + 1) - в противен случай щеше да се извърши целочислено деление (ако и size, и capacity са целочислени променливи), което не е желаният ефект!

 - Ако се викне метод pop() или top() на празен стек, хвърляйте следната грешка:
```{cpp}
throw std::out_of_range("<human_friendly_message>");
```

 - Може да бъде конструиран по 2 начина - чрез отделни конструктори или стойност на параметър по подразбиране:
     - Конструиране на нов стек с капацитет по подразбиране (вие си избирате някакъв разумен - 4 - 16 са добри числа).
     - Потребителят подава като параметър (int) първоначалния капацитет на стека. Ако подаденият параметър е по-малък от 1, хвърляйте следната грешка:
```{cpp}
throw std::invalid_argument("<human_friendly_message>");
``` 
 - Има деструктор, който освобождава ресурсите (динамично заделeната памет).


За да си тествате задачата използвайте следния main:
-------
```{cpp}

#include <assert.h>
#include <string>

using namespace std;

template<class T>
void testStack(Stack<T> *& stack, int cap = 128) {
    for (int i = 0; i < 100; i++) {
        stack->push(i);
        assert(stack->top() == i);
    }

    assert(stack->getCapacity() == cap);
    assert(stack->getSize() == 100);


    for (int i = 99; i >= 0; i--) {
        assert(stack->top() == i);
        stack->pop();
    }
    assert(stack->getCapacity() == 4);
    assert(stack->isEmpty());

}

int main() {

    try {

        Stack<int> * stackI = new ArrayStack<int>();
        testStack(stackI);
        delete stackI;

        Stack<float> * stackF = new ArrayStack<float>(1);
        testStack(stackF);
        delete stackF;

        Stack<double> * stackD = new ArrayStack<double>(65536);
        testStack(stackD, 65536);
        delete stackD;

        Stack<string> * stackS = new ArrayStack<string>();
        stackS->push("string1");
        stackS->push("string2");
        stackS->push("string3");
        stackS->push("string4");

        for (int i = 0; i < 4; i++) {
            stackS->pop();
        }
        assert(stackS->isEmpty());

        cout << "All tests passed!" << endl;

    } catch (std::exception & ex) {
        cout << ex.what() << endl;
    }

    return 0;
}
```

Щом видите надписа ___"All tests passed!"___, чак тогава може би решението ви е вярно.
