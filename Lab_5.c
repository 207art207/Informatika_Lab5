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