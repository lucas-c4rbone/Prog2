//Peça para o usuário digitar dois npumero inteiros (ex: a e b) e exiba a soma deles.

#include <iostream>
using namespace std;

int main() {
    int num1;
    cout << "Digite um número: " << endl;
    cin >> num1;
    int num2;
    cout << "Digite um número: " << endl;
    cin >> num2;

    cout << "A soma de " << num1 << " + " << num2 << " é igual a " << num1 + num2 << endl;

    return 0;
}