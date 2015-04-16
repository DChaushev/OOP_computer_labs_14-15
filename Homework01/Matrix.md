Създайте клас Matrix, който съдържа двумерен масив matrix, който от своя страна да представлява съответната матрица.
Използвайте подходящ конструктор за инициализиране на данната matrix.

Вместо нормалните масиви(int[][]) използвайте класа vector от стандартната библиотека: http://www.cplusplus.com/reference/vector/vector<br/>
Това също е масив, но динамичен. Cам се грижи за размера си. Разгледайте статията, потренирайте малко с него. Синтаксиса е малко по-различен:
<br/><br/>
vector\<T\> а; // дефиниране на динамичен масив с елементи от тип T. Т може да е int, double... дори и друг vector ;).<br/>
a.push_back(x); // добавяне на елемента х в края на масива.<br/>
a.size(); // връща броя на елементите в масива.<br/>
a[n]; // достъпване на елемента на n-та позиция. Внимавайте - трябва да има толкова елемента.<br/>

Създайте публичен метод за умножаване на дадена матрица с друга. Метода да връща матрицата резултат от умножението.<br/>
Предефинирайте оператора за извеждане \<\< на обекти от клас Matrix.

Нека вашата програма приема на първия ред две целочислени числа - N, M - размерите на първата матрица.<br/>
На следващите N реда очаквайте по M числа, с който да инициализирате първата матрица.<br/>
На следващия ред ще са размерите на втората матрица - X, Y<br/>
На следващите X реда очаквайте по Y числа - за инициализиране на втората матрица.<br/>

Ако е възможно двете матрици да се умножат - изведете получената матрица в конзолата.<br/>
Ако не - изведете -1<br/>

| Примерен вход | Примерен изход|
| ------------- |---------------|
| 2 2           | 19 22         |
| 1 2           | 43 50         |
| 3 4           | |
| 2 2           | |
| 5 7           | |
| 7 8           | |

| Примерен вход | Примерен изход|
| ------------- |---------------|
| 1 2           | -1         |
| 1 3           | |
| 3 2           | |
| 3 4           | |
| 5 6           | |
| 7 8           | |

__Hints:__<br/>
За конструктора има доста варианти:
- може да подавате вече инициализиран вектор.
- може да му подадете размерите на матрицата и четенето да става след това като се попълва директно вътрешната матрица.
- може да си измислите друго...

Карам ви да ползвате вектори, тъй като при обикновените масиви трябва предварително да знаете размера.<br/>
Възможно е да го направите и с масиви, но ще трябва да си декларирате масива с доста елементи, защото не знаете колко ще трябват. Например имате MAXN = 1000000; и си създавате частният масив: int[MAXN][MAXN]; Но ако да речем потребителят си въвежда матрица 2х2, вие реално ще използвате една доста малка част от вече заделената памет. Един от проблемите е, че по този начин се разхищава паметта, но ако ви е по-лесно го направете така.<br/>
При този вариант ще ви трябват и още две частни променливи - броя на редовете и колоните.

Още малко hints: http://stackoverflow.com/questions/21663256/how-to-initialize-a-vector-of-vectors