//Escreva um programa em C++ que possua uma variável global int contador = 100; . Dentro da
//função main , declare uma variável local de mesmo nome ( int contador = 10; ) e um bloco
//interno if(true) contendo outra variável int contador = 1; . Exiba o valor de contador em
//cada nível de escopo (global usando operador ::contador , local do main e escopo do bloco if )
//demonstrando o tempo de vida e sombreamento (shadowing) de variáveis. 

#include <iostream>
using namespace std;

int contador = 100;
int main() {
    int contador = 10; // variável local do main
    cout << "Valor do contador no main: " << contador << endl;

    if(true) {
        int contador = 1; // variável do bloco if
        cout << "Valor do contador no bloco if: " << contador << endl;
    }

    cout << "Valor do contador global: " << ::contador << endl;
    return 0;
}