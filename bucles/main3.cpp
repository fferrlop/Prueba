#include <iostream>

int main() {

//3.1 contar hasta 10 con bucle for
    for (int i = 1; i <= 10; i++){
        std::cout << i <<"\n";
    }

//3.2 tablas de multiplicar con bucle while
    {int numero1;

    std::cout << "Ingresa el número: ";
    std::cin >> numero1;
    //std::cin sirve para poder escribir abajo en los resultados

    int contador =1;

    std::cout <<"Tabla de multiplicar del "<< numero1 << " (while)" << ":\n";

    while (contador <= 10) {
        std::cout << numero1 << "*" << contador << "=" << numero1 * contador << std::endl;
    contador++;
    }
    }

//3.3 Tabla de multiplicar con bucle do-while
    {int numero2;

    std::cout << "Ingresa el número: ";
    std::cin >> numero2;

    int Contador = 1;

    std::cout << "Tabla de multiplicar del " << numero2 << " (do-while)" << ":\n";
    do {
        std::cout << numero2 << "*" << Contador << "=" << numero2 * Contador << std::endl;
        Contador++;
    }
    while (Contador <=10);
    }

//3.4 Instrucción de salto "break"

    {    int numero3;
        int suma = 0;

        std::cout << "Ingresa números positivos. Para salir, ingresa un número negativo." << std::endl;

        while (true) {
            std::cout << "Ingresa un número: ";
            std::cin >> numero3;

            if (numero3 < 0) {
                std::cout << "Has ingresado un número negativo." << std::endl;
                break;
                // La instrucción 'break' hace que salgamos del bucle while
            }

            suma += numero3;
        }

        std::cout << "La suma de los números ingresados es: " << suma << std::endl;}


    return 0;
}
