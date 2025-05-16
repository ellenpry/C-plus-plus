#include <iostream>  // entrada e saida de lei
#include <cstdlib>  // pegar o random
#include <ctime>   // tempo

int main() {
    time_t sec;
    time(&sec);
    srand((unsigned)sec); 

    // declarando as variaveis
    int numero, tentativa; 
    char jogar;

    do {
        numero = (rand() % 15) + 1;
        std::cout << "Tente adivinhar o número entre 1 e 15 (você tem 3 tentativas)!\n"; // print essa mensagem

        bool acertou = false;  // booleana pra ver se acertou

        // for para rodar 3 vezes ate o usuario acertar
        for (int i = 1; i <= 3; i++) { 
            std::cout << "Tentativa " << i << ": ";
            std::cin >> tentativa;

            if (tentativa == numero) {
                std::cout << "Você acertou!!\n"; // caso ele acerte
                acertou = true;
                break;
            } else if (tentativa < numero) {
                std::cout << "Número muito baixo...\n"; // caso o numero seja menor
            } else {
                std::cout << "Número muito alto...\n"; // caso o numero seja maior
            }
        }

        if (!acertou) {
            std::cout << "Você errou! O número era esse: " << numero << "\n"; // se if not acertou
        }

        std::cout << "Deseja jogar novamente? [s/n] "; // pergunta pra entrar no loop
        std::cin >> jogar;
  
    } while (jogar == 's' || jogar == 'S'); // existe diferenca entre aspas duplas ou nao

    std::cout << "fim de jogo\n";

    return 0;

}