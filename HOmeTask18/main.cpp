#include <iostream>

int sum(int num1, int num2 = 0, int num3 = 0, int num4 = 0, int num5 = 0) {
    return num1 + num2 + num3 + num4 + num5;
}

double average(double a, double b, double c) {
    return (a + b + c) / 3;
}

void FindMax(int a, int b, int c) {
    std::cout << "Тип переданных значений: int\n";
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    std::cout << "Максимальное значение: " << max << std::endl;
}

void FindMax(short a, short b, short c) {
    std::cout << "Тип переданных значений: short\n";
    short max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    std::cout << "Максимальное значение: " << max << std::endl;
}

void FindMax(double a, double b, double c) {
    std::cout << "Тип переданных значений: double\n";
    double max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    std::cout << "Максимальное значение: " << max << std::endl;
}

template<typename T>
bool is_prime(T n) {
    if (n <= 1) {
        return false;
    }
    for (T i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

template<typename T>
T find_first_prime(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (is_prime(arr[i])) {
            return arr[i];
        }
    }
    return T();  
}

int main() {
    setlocale(LC_ALL, "RU");
    int num1, num2, num3, num4, num5;
    std::cout << "Задача 1\nВведите пять чисел-> ";
    std::cin >> num1 >> num2 >> num3 >> num4 >> num5;
    int result = sum(num1, num2, num3, num4, num5);
    std::cout << "Сумма: " << result << std::endl;

    double numb1, numb2, numb3;
    std::cout << "Задача2\nВведите три числа-> ";
    std::cin >> numb1 >> numb2 >> numb3;
    double avg = average(numb1, numb2, numb3);
    std::cout << "Среднее арифметическое: " << avg << std::endl;

    int a = 5, b = 10, c = 7;
    short d = 2, e = 4, f = 6;
    double g = 1.5, h = 3.7, i = 2.3;
    FindMax(a, b, c);
    FindMax(d, e, f);
    FindMax(g, h, i);

    int arr[] = { 4, 9, 7, 12, 15, 23 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int first_prime = find_first_prime(arr, size);
    if (first_prime != 0) {
        std::cout << "Задача4\nПервое простое число: " << first_prime << std::endl;
    }
        else {
        std::cout << "Простых чисел не найдено" << std::endl;
    }








































    return 0;
}