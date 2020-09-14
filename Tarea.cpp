// Tarea.cpp : This file contains the 'main' function. Program execution begins and ends there.

//Ejercicio 1
#include <iostream>

int main()
{
    int a, b, c;
    std::cout << "Ingrese el primer lado del triangulo:\n";
    std::cin >> a;
    std::cout << "Ingrese el segundo lado del triangulo:\n";
    std::cin >> b;
    std::cout << "Ingrese el tercer lado del triangulo:\n";
    std::cin >> c;

    if (a == b && a == c && b == c)
        std::cout << "El triangulo es equilatero!\n"; 
    if (a==b&&b!=c||b==c&&c!=a||c==a && a!=b)
    std::cout << "El triangulo es isoceles!";
    if (a!=b&&b!=c&&a!=c)
    std::cout << "El triangulo es escaleno!\n";

}

//Ejercicio 2
#include <iostream>

int main()
{
    int a;
    std::cout << "Ingrese el número que corresponde:\n";
    std::cin >> a;

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            if (i == 0 || i == a - 1 || j == 0 || j == a - 1)
                std::cout << "*";
            else
                std::cout << "  ";
        }
        //std::cout << std::endl;



    }




