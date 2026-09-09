//Desenvolva um programa que receba do usuário uma string representando um número inteiro (ex:
//"150" ). Converta essa string para inteiro utilizando a função stoi() . Em seguida, converta o
//inteiro obtido para bool e utilize operadores relacionais e lógicos para verificar se o valor é positivo e
//par. Imprima o resultado booleano formatado como texto ( true / false ) utilizando o manipulador
//std::boolalpha .

#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Digite um número inteiro: ";
    cin >> input;

    int numero = stoi(input);
    bool positivo = numero > 0;
    bool par = numero % 2 == 0;

    cout << boolalpha;
    cout << "Número positivo: " << positivo << endl;
    cout << "Número par: " << par << endl;

    return 0;
}