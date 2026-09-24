//2. Estrutura e função para soma
//Solicite dois valores inteiros. Implemente uma função chamada soma que receba os dois
//valores como parâmetros e retorne o resultado. O programa principal deve chamar a
//função e exibir a soma.

#include <iostream>
using namespace std;

int soma(int a, int b) {
    return a + b;
}

int main () {
    int a, b, c;
    cout << "Digite um numero: " << endl;
    cin >> a;
    cout << "Digite um número: " << endl;
    cin >> b;
    
    c = soma(a,b);

    cout << "A soma dos números é: " << c << endl;

    return 0;
}