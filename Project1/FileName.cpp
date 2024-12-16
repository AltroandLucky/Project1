#include "Library.h"

int main() {
    srand(static_cast<unsigned int>(time(0))); // ��� ������������� ���������� ��������� �����

    // �������� ������� Point<int> � ����� ����������
    Point<int> obj1(10);
    cout << "Inzi one parametr:" << endl;
    obj1.Print();

    // ������������� ����� �������
    obj1.Init(15, 20);
    cout << "after handmade Inzi:" << endl;
    obj1.Print();

    // ������������� ���������� ���������� ��� ��
    obj1.InitRandom();
    cout << "after random Inzi:" << endl;
    obj1.Print();

    return 0;
}
