//Escreva um algoritmo para calcular o fatorial de um número inteiro.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Digite um número inteiro: ";
    cin >> n;
    int fatorial = 1;
    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }
    cout << "O fatorial de " << n << " é: " << fatorial << endl;
    return 0;
}