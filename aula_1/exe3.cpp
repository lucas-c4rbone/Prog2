//Declare uma variável inteira numero, Peça para o usuário digitar um valor e exiba o dobro desse número na tela.

#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Digite um número: ";
    cin >> numero;
    cout << "O dobro de " << numero << " é " << numero * 2 << endl;
    
    return 0;
}