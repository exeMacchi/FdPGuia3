// 5. Hacer un programa que solicite el ingreso de las notas del primer parcial y del segundo parcial de 
//    una alumna de programaci�n. El programa deber� analizar las notas y emitir la situaci�n de la alumna 
//    seg�n la siguiente escala:
//      a. Si tiene 8 o m�s en ambos parciales, emitir �aprobaci�n directa�.
//      b. Si no tiene 8 o m�s en ambos pero tiene aprobados ambos parciales (se aprueba con 6 o m�s), 
//         emitir �rinde examen final�.
//      c. Si tiene menos de 6 en alguno de los dos parciales, emitir �debe recuperar�.
//    El programa debe emitir solo un cartel, el que corresponda.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int A, B;

    cout << "Ingrese la primera nota: ";
    cin >> A;
    cout << "Ingrese la segunda nota: ";
    cin >> B;

    if (A >= 8 && B >= 8)
    {
        cout << "\nAprobacion directa." << endl;
    }
    else if (A >= 6 && B >= 6)
    {
        cout << "\nExamen final." << endl;
    }
    else
    {
        cout << "\nDebe recuperar la materia." << endl;
    }

    return 0;
}