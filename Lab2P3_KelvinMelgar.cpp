#include <iostream>
#include "stdlib.h"
#include "time.h"

using namespace std;

//generador de ENTEROS
int genRand() {
    int n;
    return 97 + rand() % 26;
}

// Ordenar el arreglo

char[] ordenarArreglo(char[] a) {



    return char[];
}

int main() {
    
    srand(time(NULL));


    cout << "Lab 2 Progra 3 \n\n";

    cout << "1. Ordenamiento y omision en arreglos. \n";
    cout << "2. Factoriales y figuras. \n\n";
    cout << "3. Salir.\n\n";

    cout << "Ingrese una opcion: ";
    int opcion;
    cin >> opcion;

    do
    {
        switch (opcion)
        {
        case 1:
        {
            char letras[10];

            for (int i = 0; i < 10; i++) {
                letras[i] = genRand();
            }

            cout << "Arreglo Original: ";

            for (int i = 0; i < 10; i++) {
                cout << letras[i] << " ";
            }


            break;
        }


        case 2:
        {
            break;
        }

        case 3:
            cout << "\nSaliendo\n\n";
            break;

        default:
            cout << "\nOpcion invalida\n\n";
            break;
        }

        cout << "\n--------------------------------";
        cout << "\n\n1. Ordenamiento y omision en arreglos.\n";
        cout << "2. Factoriales y figuras \n\n";
        cout << "3. Salir.\n\n";

        cout << "Ingrese una opcion: ";
        opcion;
        cin >> opcion;

    } while (opcion != 3);




    return 0;
}