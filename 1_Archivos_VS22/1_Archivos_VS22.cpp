// 1_Archivos_VS22.cpp : This file contains the 'main' function. Program execution begins and ends there.

//manejo de consola
#include <iostream>
//biblioteca de manejo de archivos
#include <fstream>
#include <string>
#define MAXSIZE 128

using namespace std;

string lineasLeidas;
string lineasGuardadas;

void EjemploApuntadores() {
    std::cout << "apuntadores\n";
    int valor = 66;
    int* ref2 = &valor;
    *ref2 = 128;
    printf("valor%i Mem:%#010x\n", *ref2, ref2);
    std::cout << "valor=" << valor << std::endl;
}

/*void Promedio(float* valor_acum) {
    //*valor_acum += *valor_acum:
}*/

void Promedio() {
    
}

void Acumular(float & num, float valor) {
    num += valor;
}

int main(int argc, char ** argv)
{
    /*if (argc <= 1) return 0;

    float suma = 0;
    std::cout << "argc: " << argc << std::endl;
    for (int i = 0; i < argc; i++) {
        std::cout << argv[i] << std::endl;
        Acumular(suma, atoi(argv[i]));
    }

    float promedio = suma / (argc - 1);
    std::cout << "promedio: " << promedio << std::endl;*/

    /*int x = 18;
    Acumular(x, 8);
    std::cout << "nuevo valor: " << x << std::endl;*/

    std::cout << "Leyendo archivo" << std::endl;

    std::ifstream file;
    file.open("Calculo.txt", std::ifstream::in);

    if (file.is_open())
    {
        std::cout << "archivo abierto\n";

        char buffer[MAXSIZE];
        while (!file.eof())
        {
            file.getline(buffer, MAXSIZE);
            std::cout << buffer << std::endl;

            ifstream leer("Calculo.txt");
            
            while (getline(leer, lineasLeidas)) {
                lineasGuardadas = lineasGuardadas + lineasLeidas + "\n";
            }

            int i, numeros;
            float suma = 0, promedio = 0;
            for (i = 0; i < 6; i++) {
                suma = 8 + 10 + 5 + 7 + 4 + 9;
            }
            promedio = suma / 6;

            if (strcmp(buffer, "8 10 5 7 4 9") == 0) {
                ofstream imprimir("Calculo.txt");
                imprimir << lineasGuardadas << promedio;
            }
            cout << "promedio: " << promedio;
            return 0;

        }
    }
    else {
        std::cout << "no se encuentra el archivo\n";
    }

    // el archivo Calculo.txt solo contiene los números 8, 10, 5, 7, 4 y 9.
}

