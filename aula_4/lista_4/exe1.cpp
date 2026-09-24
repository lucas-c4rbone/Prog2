//1. Estrutura para representar uma data
//Defina uma estrutura chamada Data, contendo os campos dia, mes e ano, do tipo inteiro.
//Solicite uma data ao usuário e exiba os valores armazenados, utilizando o operador ponto
//para acessar os membros.

#include <iostream>
using namespace std;

struct Data {
    int dia;
    int mes;
    int ano;
};

int main() {
    Data data;

    cout << "Digite o dia: ";
    cin >> data.dia;

    cout << "Digite o mes: ";
    cin >> data.mes;

    cout << "Digite o ano: ";
    cin >> data.ano;

    cout << "Data informada: "
        << data.dia << "/"
        << data.mes << "/"
        << data.ano << endl;

    return 0;
}