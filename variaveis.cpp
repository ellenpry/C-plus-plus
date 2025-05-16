#include <iostream>
#include <string>  // para usar std::string

int main() {
    int idade = 25;            // número inteiro
    double peso = 68.5;        // número decimal (mais usado que float)
    std::string nome = "Ana";  // texto (string)
    bool aprovado = true;      // valor booleano

    std::cout << nome << " tem " << idade << " anos e pesa " << peso << "kg.\n";
    std::cout << "Aprovado? " << aprovado << std::endl;

    return 0;
}