#pragma once
#include <iostream>
#include <cstdlib> // Для rand()
#include <ctime>   // Для инициализации srand()
using namespace std;

template <class T>
class Point {
    T a;
    T b;

public:
    Point();                 // Конструктор по умолчанию
    Point(T, T);             // Конструктор с двумя параметрами
    Point(T);                // Конструктор с одним параметром
    void Init(T, T);         // Инициализация вручную
    void InitRandom();       // Инициализация случайными значениями
    void Print();            // Печать значений
};

// Конструктор по умолчанию
template <class T>
Point<T>::Point() : Point(0, 0) {}

// Конструктор с двумя параметрами
template <class T>
Point<T>::Point(T a, T b) {
    this->a = a;
    this->b = b;
}

//И снова Конструктор с одним параметром
template <class T>
Point<T>::Point(T a) : Point(a, a) {}

// Инициализация тут будет вручную
template <class T>
void Point<T>::Init(T a, T b) {
    this->a = a;
    this->b = b;
}

// А тут инициализация случайными значениями
template <class T>
void Point<T>::InitRandom() {
    a = rand() % 100; // Генерация случайного числа от 0 до 99
    b = rand() % 100;
}

// Печать значений
template <class T>
void Point<T>::Print() {
    cout << "a: " << a << "\tb: " << b << endl;
}
