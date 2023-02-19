// 5. Hacer un programa que solicite el ingreso de las notas del primer parcial y del segundo parcial de 
//    una alumna de programación. El programa deberá analizar las notas y emitir la situación de la alumna 
//    según la siguiente escala:
//      a. Si tiene 8 o más en ambos parciales, emitir “aprobación directa”.
//      b. Si no tiene 8 o más en ambos pero tiene aprobados ambos parciales (se aprueba con 6 o más), 
//         emitir “rinde examen final”.
//      c. Si tiene menos de 6 en alguno de los dos parciales, emitir “debe recuperar”.
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