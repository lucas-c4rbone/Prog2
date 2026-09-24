//5. Função sobrecarregada para cálculo do quadrado
//Implemente duas funções chamadas calculaQuadrado: uma recebendo int e outra
//recebendo double. Teste as duas versões no programa principal e exiba os resultados.

#include <iostream>
using namespace std;

int calculaQuadrado(int numero) {
    return numero * numero;
}

double calculaQuadrado(double numero) {
    return numero * numero;
}

int main() {
    int numeroInt;
    double numeroDouble;

    cout << "Digite um número inteiro: ";
    cin >> numeroInt;

    cout << "Digite um número decimal: ";
    cin >> numeroDouble;

    int resultadoInt = calculaQuadrado(numeroInt);
    double resultadoDouble = calculaQuadrado(numeroDouble);

    cout << "O quadrado do número inteiro " << numeroInt << " é: " << resultadoInt << endl;
    cout << "O quadrado do número decimal " << numeroDouble << " é: " << resultadoDouble << endl;

    return 0;
}