#include <iostream>   // biblioteca base de entrada e saida
#include <cmath>      // biblioteca de matematica

int main() {
    double numeros[] = {4, 12.25, 0.0121}; // array com os numeros fixos

    std::cout << "Raizes quadradas:\n";
    for (double num : numeros) {
        std::cout << "sqrt(" << num << ") = " << sqrt(num) << std::endl; // calcula e mostra a raiz quadrada
    }

    double entrada;
    std::cout << "\nDigite um numero para calcular a raiz quadrada: ";
    std::cin >> entrada; // le o numero no programa

    if (entrada < 0) {
        std::cout << "Não e possivel calcular a raiz quadrada de numero negativo.\n"; // se for negativo nao entra
    } else {
        std::cout << "sqrt(" << entrada << ") = " << sqrt(entrada) << std::endl; // calcula e mostra a raiz
    }

    return 0; // fim do programa
}