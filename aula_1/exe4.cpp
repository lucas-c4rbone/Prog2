//Peça para o usuário digitar um npumero inteira e exiba o triplo desse valor. (Repita a estrutura do exercício 3.)

#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Digite um número: ";
    cin >> numero;
    cout << "O triplo de " << numero << " é " << numero * 3 << endl;

    return 0;
}