#include <iostream>
using namespace std;

// essa eh a versao ERRADA (mostrada no slide)
/*
void swap_wrong(float *p1, float *p2)
{
    float *temp;   // isso troca so os ponteiros locais
    temp = p1;     // p1 passa a apontar p/ y
    p1   = p2;     // p2 passa a apontar p/ x
    p2   = temp;   // fora da funcao nada muda
}
*/

// versao CORRETA usando ponteiros ((fiz so pra ter uma ideia
void swap_ptr(float *p1, float *p2)
{
    float temp  = *p1; // temp recebe o valor apontado por p1
    *p1 = *p2;         // valor de x vira valor de y
    *p2 = temp;        // valor de y vira valor antigo de x
}

// versao CORRETA usando referencias
void swap_ref(float &a, float &b)
{
    float temp = a; // copia o valor de a
    a = b;          // a recebe valor de b
    b = temp;       // b recebe valor antigo de a
}

// parte principal com exemplos do ptr e ref
int main()
{
    float x = 11.1f;
    float y = 22.2f;

    cout << "antes do swap_ptr  -> x = " << x << ", y = " << y << '\n';
    swap_ptr(&x, &y);                 // passa ENDERECO de x e y
    cout << "depois do swap_ptr -> x = " << x << ", y = " << y << "\n\n";

    // troca novamente usando referencias
    cout << "antes do swap_ref  -> x = " << x << ", y = " << y << '\n';
    swap_ref(x, y);                   // passa variaveis direto
    cout << "depois do swap_ref -> x = " << x << ", y = " << y << '\n';

    return 0;
}