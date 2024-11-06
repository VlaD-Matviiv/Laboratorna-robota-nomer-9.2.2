// Lab 9.2.2

#include <iostream>
#include "triangle_cosines.h.cpp"
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double a, b, c;

    cout << "Введіть сторони трикутника (a, b, c): ";
    cin >> a >> b >> c;

    if (!isValidTriangle(a, b, c)) 
    {
        cout << "Задано невалідні сторони для трикутника.\n";
        return 1;
    }

    double cosA = cosineOfAngle(a, b, c);
    double cosB = cosineOfAngle(b, a, c);
    double cosC = cosineOfAngle(c, a, b);

    double sumOfCosines = cosA + cosB + cosC;
    double limit = 1.5;

    cout << "cosA + cosB + cosC = " << sumOfCosines << endl;
    if (sumOfCosines <= limit) 
    {
        cout << "Нерівність cosA + cosB + cosC <= 3/2 виконується." << endl;
    }
    else 
    {
        cout << "Нерівність cosA + cosB + cosC <= 3/2 не виконується." << endl;
    }

    return 0;
}

