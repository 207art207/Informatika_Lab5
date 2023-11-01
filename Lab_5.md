# Навігація по документу
- [Титулка](#титулка)
- [Вправа 1](#вправа-1-програмування-мовою-сi-вирази-та-оператори)
- [Остаточний код](#осточний-код)
- [Компіляція коду](#компіляція-коду)
- [Висновок](#висновок)
- [Контрольнi питання](#контрольнi-питання)

## Титулка
<p align="center"><strong>МІНІСТЕРСТВО ОСВІТИ І НАУКИ УКРАЇНИ
<br>НАЦІОНАЛЬНИЙ ТЕХНІЧНИЙ УНІВЕРСИТЕТ УКРАЇНИ
<br>«КИЇВСЬКИЙ ПОЛІТЕХНІЧНИЙ ІНСТИТУТ
<br> ІМЕНІ ІГОРЯ СІКОРСЬКОГО»
<br><br><br>Навчально-науковий інститут телекомунікаційних систем
<br><br>Кафедра телекомунікацій</strong>
<br><br><br><br><br>Дисципліна: «Інформатика. Частина 1.»
<br><strong>ПРОТОКОЛ ВИКОНАННЯ ЛАБОРАТОРНОЇ РОБОТИ № 5</strong> 
<br>«Лабораторна робота 5. Оператори i вирази в Сi. Використання стандартної бiблiотеки math.h.»</p align="center">
<br><br><br><p align="right">Виконали студенти групи 
<br>ЦС-31 Бригада № 8:
<br>- Шваліковський Вадим
<br>- Шилан Владислав
<br>- Шумлянський Артем
<br>- Якимець Ігор
<br><br>Перевірила: 
<br>асистент кафедри ТК 
<br>Олена ФУРТАТ</p>
<br><br><br><p align="center"><strong>КИЇВ 2023</strong></p align="center">

## Вправа 1. Програмування мовою Сi: вирази та оператори.
Завдання 1. Написати програми мовою програмування Сi вiдповiдно до свого варiанту та Додаткiв 1, 2. Протестувати, вiдлагодити програми i вивести в консоль результати обчислень.

**Додаток_1**
![Додаток_1](https://github.com/207art207/Informatika_Lab5/blob/main/Aditional_1.png?raw=true)
Завдання_№8

```
int main() {
    double a, b, c, d, y; // Змінні, які були дані в умові
    a = 0.345; // Значення змінної a
    b = -2.25; // Значення змінної b
    c = 2.65; // Значення змінної c
    d = 3.99; // Значення змінної d
    y = 5*a/sin(a) + (cimag)(csqrt((tan(fabs(b)*c)/log(d)))); // Обчислення значення змінної y
    printf ("y = %f\n", y); // Виведення значення змінної y
    return 0;
}
```

**Додаток_2**

Завдання_№3

Написати програму, яка читає введенi з клавiатури слова (речення) i пiдраховує кiлькiсть
слiв в реченнi.
```
int main() {
    char sentence[1000]; // Змінна, яка буде містити введене речення з клавіатури
    int wordCount = 0; // Змінна кількості слів
    printf("Enter sentence: "); // Виведення тексту для введення речення
    fgets(sentence, sizeof(sentence), stdin); // Зчитування введеного речення
    for (int i = 0; sentence[i] != '\0'; i++) { /*Цикл, який обчислює кількість слів у реченні, перебираючи символи*/
        if (isspace(sentence[i])) { /*Урахування пробілів у реченні*/
            wordCount++; 
        }
    }
    printf("Count of words in a sentence: %d\n", wordCount); // Виведення кількості слів у реченні
    return 0;
}
```

## Осточний код
```
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <complex.h>
#include <ctype.h>

int main () {

    while (1) { /*Нескінченний цикл для повторного запуску коду*/
    int n; // Змінна для вибору завдання
    printf ("Choose task:\n 1.Aditional_1 task_8\n 2.Aditional_2 task_3\n"); // Виведення тексту для вибору завдання
    scanf ("%d", &n); // Зчитування вибраного завдання з клавіатури

if (n==1) { /*Завдання 1*/
    double a, b, c, d, y; // Змінні, які були дані в умові
    a = 0.345; // Значення змінної a
    b = -2.25; // Значення змінної b
    c = 2.65; // Значення змінної c
    d = 3.99; // Значення змінної d
    y = 5*a/sin(a) + (cimag)(csqrt((tan(fabs(b)*c)/log(d)))); // Обчислення значення змінної y
    printf ("y = %f\n", y); // Виведення значення змінної y
}

if (n==2) {
    char sentence[1000]; // Змінна, яка буде містити введене речення з клавіатури
    int wordCount = 0; // Змінна кількості слів
    getchar(); // Очищення попередньо введених символів з клавіатури
    printf("Enter sentence: "); // Виведення тексту для введення речення
    fgets(sentence, sizeof(sentence), stdin); // Зчитування введеного речення
    for (int i = 0; sentence[i] != '\0'; i++) { /*Цикл, який обчислює кількість слів у реченні, перебираючи символи*/
        if (isspace(sentence[i])) { /*Урахування пробілів у реченні*/
            wordCount++; 
        }
    }
    printf("Count of words in a sentence: %d\n", wordCount); // Виведення кількості слів у реченні
    }
    
    }
    
}
```
## Компіляція коду
![Компіляція коду](https://github.com/207art207/Informatika_Lab5/blob/main/Compilation_of_code.png?raw=true)
## Висновок
Під час виконання цієї лабораторної роботи ми поглибили свої знання з написання коду на мові програмування C, також ми ознайомилися з бібліотекою <Math.h>.
## Контрольнi питання
**1. Що означає вираз в Сi?**

Вираз в Сі - це комбінація операторів, змінних та констант, яка обчислює значення. Вираз може включати арифметичні операції, логічні операції, функції і т. д.

**2. Як працює скорочений умовний оператор? Пояснити на прикладi.**

Скорочений умовний оператор у Сі має такий синтаксис:
```
int x = 10;
int y = (x > 5) ? 20 : 30; // y буде 20, оскільки x > 5 - істина
```
Цей оператор перевіряє умову першого виразу. Якщо умова істинна, то він повертає значення другого виразу; в іншому випадку - значення третього виразу.

**3. Як працює розширений умовний оператор. Пояснити на прикладi.**

Розширений умовний оператор у Сі використовується для обрання одного з декількох блоків коду на основі значення виразу. Синтаксис:
```
int x = 10;
if (x > 15) {
    printf("x більше 15\n");
} else if (x > 5) {
    printf("x більше 5, але не більше 15\n");
} else {
    printf("x не більше 5\n");
}
```

**4. Пояснити на прикладi призначення i використання оператора while.**

Оператор while в Сі використовується для виконання певного блоку коду, доки умова вираження вірна. Він має такий синтаксис:
```
int i = 0;
while (i < 5) {
    printf("%d ", i);
    i++;
}
// Виведе: 0 1 2 3 4
```

**5. Пояснити на прикадi призначення i використання оператора for.**

Оператор for в Сі використовується для ітерації через послідовність значень. Він має такий синтаксис:
```
for (int i = 0; i < 5; i++) {
    printf("%d ", i);
}
// Виведе: 0 1 2 3 4
```

**6. В чому поягає особивiсть оператора do.**

Оператор do використовується для виконання блоку коду принаймні один раз, навіть якщо умова не виконується. Синтаксис:
```
int i = 0;
do {
    printf("%d ", i);
    i++;
} while (i < 5);
// Виведе: 0 1 2 3 4
```

**7. Що означає функцiя floor()? Пояснити на прикладi.**

Функція floor() в Сі використовується для округлення числа вниз до найближчого цілого значення. Наприклад:
```
double x = 5.7;
double result = floor(x); // result буде 5.0
```

**8. У чому полягає вiдмiннiсть функцiй floor() та ceil() математичної бiблiотеки Сi. Пояснити на прикладах.**

Функція ceil() в Сі використовується для округлення числа вгору до найближчого цілого значення. Наприклад:
```
double x = 5.1;
double result = ceil(x); // result буде 6.0
```
Отже, відмінність між floor() і ceil() полягає в тому, як вони обробляють дробову частину числа. floor() завжди округлює вниз, а ceil() завжди округлює вгору.