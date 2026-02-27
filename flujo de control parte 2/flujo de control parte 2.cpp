#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

int main() {

    int n;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> n;

    // Encabezado de la tabla
    cout << "\n";
    cout << left;
    cout << setw(20) << "Estudiante"
        << setw(8) << "Nota1"
        << setw(8) << "Nota2"
        << setw(8) << "Nota3"
        << setw(8) << "Nota4"
        << setw(10) << "Promedio"
        << setw(12) << "Estatus" << endl;

    cout << "--------------------------------------------------------------------------\n";

    // Bucle para cada estudiante
    for (int i = 1; i <= n; i++) {

        string nombre;
        double n1, n2, n3, n4, promedio;

        cout << "\nIngrese el nombre del estudiante " << i << ": ";
        cin.ignore();
        getline(cin, nombre);

        cout << "Nota 1: ";
        cin >> n1;
        cout << "Nota 2: ";
        cin >> n2;
        cout << "Nota 3: ";
        cin >> n3;
        cout << "Nota 4: ";
        cin >> n4;

        // Calcular promedio
        promedio = (n1 + n2 + n3 + n4) / 4;

        // Determinar estatus
        string estatus;
        if (promedio >= 70)
            estatus = "Aprobado";
        else
            estatus = "Reprobado";

        // Mostrar fila en tabla
        cout << left;
        cout << setw(20) << nombre
            << setw(8) << n1
            << setw(8) << n2
            << setw(8) << n3
            << setw(8) << n4
            << setw(10) << promedio
            << setw(12) << estatus << endl;
    }

    return 0;
}