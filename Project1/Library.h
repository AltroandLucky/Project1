#pragma once
#include <iostream>
#include <cstdlib> // ��� rand()
#include <ctime>   // ��� ������������� srand()
using namespace std;

template <class T>
class Point {
    T a;
    T b;

public:
    Point();                 // ����������� �� ���������
    Point(T, T);             // ����������� � ����� �����������
    Point(T);                // ����������� � ����� ����������
    void Init(T, T);         // ������������� �������
    void InitRandom();       // ������������� ���������� ����������
    void Print();            // ������ ��������
};

// ����������� �� ���������
template <class T>
Point<T>::Point() : Point(0, 0) {}

// ����������� � ����� �����������
template <class T>
Point<T>::Point(T a, T b) {
    this->a = a;
    this->b = b;
}

//� ����� ����������� � ����� ����������
template <class T>
Point<T>::Point(T a) : Point(a, a) {}

// ������������� ��� ����� �������
template <class T>
void Point<T>::Init(T a, T b) {
    this->a = a;
    this->b = b;
}

// � ��� ������������� ���������� ����������
template <class T>
void Point<T>::InitRandom() {
    a = rand() % 100; // ��������� ���������� ����� �� 0 �� 99
    b = rand() % 100;
}

// ������ ��������
template <class T>
void Point<T>::Print() {
    cout << "a: " << a << "\tb: " << b << endl;
}
