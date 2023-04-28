#include <iostream>
#include <list>
#include "stdlib.h"


#include "time.h"

using namespace std;


//generador de ENTEROS
int genRand() {
    int n;
    return 97 + rand() % 26;
}


// Calcular factorial
int Factorial(int n) {

    if (n > 0) {
        return n * Factorial(n -1);
    }return 1;

}

void dibujarT(int n) {
    for (int i = 1; i < n; i++)
    {
        for (int e= 1; e <= i; e++)
        {
            cout << "*";
        }

        cout << "\n";
    }
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

        if (opcion == 1) {

            char letras[10];

            for (int i = 0; i < 10; i++) {
                letras[i] = genRand();
            }

            cout << "Arreglo Original: ";

            for (int i = 0; i < 10; i++) {
                cout << letras[i] << " ";
            }

            //Ordenar
            for (int i = 0; i < 10; i++) {
                for (int e = 0; e < 9; e++) {


                    if (letras[e] > letras[e + 1]) {
                        char m = letras[e + 1];
                        letras[e + 1] = letras[e];
                        letras[e] = m;

                    }

                }

            }


            // Letras unicas arreglo (lista)
            list<char> letras_u;
            letras_u.push_back(letras[0]);

            for (int i = 1; i < 10; i++)
            {
                //busca la letra
                auto m = find(letras_u.begin(), letras_u.end(), letras[i]);
                if (m == letras_u.end()) {
                    letras_u.push_back(letras[i]);
                }
            }

            cout << "\nArreglo Final: ";
            // para iterar la lista
            list <char> ::iterator e;
            for (e = letras_u.begin(); e != letras_u.end(); e++)
            {
                cout << *e << " ";
            }


        }
        else if (opcion == 2) {

            int n;
            cout << "\nIngrese un entero positivo: ";
            cin >> n;

            cout << "\nSu factorial es: " << Factorial(n) << "\n";
            dibujarT(Factorial(n));

        }
        else if (opcion == 3) {
            cout << "\nSaliendo\n\n";
        }
        else {
            cout << "\nOpcion invalida\n\n";
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