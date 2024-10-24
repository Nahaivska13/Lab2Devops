#include "funcA.h"
#include <cmath>

// Реалізація функції для обчислення суми n елементів ряду
double FuncAClass::FuncA(int n) {
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        // Додай формулу відповідно до завдання
        sum += pow(-1, i) * eulerNumber(2 * i) * pow(x, 2 * i) / factorial(2 * i);

    }
    return sum;
}

