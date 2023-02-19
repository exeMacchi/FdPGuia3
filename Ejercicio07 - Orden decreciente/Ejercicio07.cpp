// 7. Hacer un programa para ingresar 4 números. Luego analizar e informar por pantalla si los mismos 
//    se encuentran ordenados de forma decreciente.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int A, B, C, D;

    cout << "Ingrese el primer numero: ";
    cin >> A;
    cout << "Ingrese el segundo numero: ";
    cin >> B;
    cout << "Ingrese el tercer numero: ";
    cin >> C;
    cout << "Ingrese el cuarto numero: ";
    cin >> D;

    if (A > B && B > C && C > D)
    {
        cout << "\nLos numeros estan en orden descendiente." << endl;
    }
    else
    {
        cout << "\nLos numeros no estan en orden descendiente." << endl;
    }

    return 0;
}