#include "Library.h"

int main() {
    srand(static_cast<unsigned int>(time(0))); // ТУТ Инициализация генератора случайных чисел

    // Создание объекта Point<int> с одним параметром
    Point<int> obj1(10);
    cout << "Inzi one parametr:" << endl;
    obj1.Print();

    // Инициализация снова вручную
    obj1.Init(15, 20);
    cout << "after handmade Inzi:" << endl;
    obj1.Print();

    // Инициализация случайными значениями так же
    obj1.InitRandom();
    cout << "after random Inzi:" << endl;
    obj1.Print();

    return 0;
}
