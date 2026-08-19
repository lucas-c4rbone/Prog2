//Peça para o usuário digitar dois números inteiros e exiba o resultado da subtração do primeiro pelo segundo. (Repita a mesma estrutura do exercício 5.)

#include <iostream>
using namespace std;

int main() {
    int num1;
    cout << "Digite um número: " << endl;
    cin >> num1;
    int num2;
    cout << "Digite um número: " << endl;
    cin >> num2;

    cout << "A subtração de " << num1 << " - " << num2 << " é igual a " << num1 - num2 << endl; 

    return 0;
}