// 11. Hacer un programa para ingresar tres números y luego mostrarlos ordenados de menor a mayor.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int A, B, C;

    cout << "Ingrese el primer numero: ";
    cin >> A;
    cout << "Ingrese el segundo numero: ";
    cin >> B;
    cout << "Ingrese el tercer numero: ";
    cin >> C;

    if (A < B && B < C)
    {
        cout << "\nEl orden es: " << A << " - " << B << " - " << C << endl;
    }
    else if (A < C && C < B)
    {
        cout << "\nEl orden es: " << A << " - " << C << " - " << B << endl;
    }
    else if (B < A && A < C)
    {
        cout << "\nEl orden es: " << B << " - " << A << " - " << C << endl;
    }
    else if (B < C && C < A)
    {
        cout << "\nEl orden es: " << B << " - " << C << " - " << A << endl;
    }
    else if (C < A && A < B)
    {
        cout << "\nEl orden es: " << C << " - " << A << " - " << B << endl;
    }
    else if (C < B && B < A)
    {
        cout << "\nEl orden es: " << C << " - " << B << " - " << A << endl;
    }


    return 0;
}