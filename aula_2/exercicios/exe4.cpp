//Exercício 4: Leitura de Dados com Espaços
//Crie um programa que leia o nome completo de um aluno contendo espaços (utilizando
//getline(cin, nome) ), sua idade ( int ) e sua nota final ( float ). Em seguida, converta a nota
//final (float) para std::string usando to_string e exiba uma mensagem formatada de
//confirmação contendo todos os dados inseridos. 

#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;
    int idade;
    float nota;
    cout << "Digite seu nome completo: " << endl;
    getline(cin, nome);

    cout << "Digite sua idade: " << endl;
    cin >> idade;

    cout << "Digite sua nota final: " << endl;
    cin >> nota;

    string notaStr = to_string(nota);
    cout << "Confirmação dos dados inseridos:" << endl;
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
    cout << "Nota final: " << notaStr << endl;
    return 0;
}