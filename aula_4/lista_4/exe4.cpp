//4. Estrutura de aluno e cálculo de média
//Crie uma estrutura Aluno contendo nome, matrícula e três notas. Implemente uma função
//que receba um objeto dessa estrutura e retorne a média das três notas. Exiba todos os
//dados e a média.

#include <iostream>
#include <string>
using namespace std;

struct Aluno {
    string nome;
    int matricula;
    float nota1;
    float nota2;
    float nota3;
};

float calcularMedia(const Aluno& aluno) {
    return (aluno.nota1 + aluno.nota2 + aluno.nota3) / 3.0;
}

int main() {
    Aluno aluno;

    cout << "Digite o nome do aluno: ";
    cin.ignore(); // Limpa o buffer antes de ler a string
    getline(cin, aluno.nome);

    cout << "Digite a matrícula do aluno: ";
    cin >> aluno.matricula;

    cout << "Digite a primeira nota: ";
    cin >> aluno.nota1;

    cout << "Digite a segunda nota: ";
    cin >> aluno.nota2;

    cout << "Digite a terceira nota: ";
    cin >> aluno.nota3;

    float media = calcularMedia(aluno);

    cout << "\nDados do Aluno:" << endl;
    cout << "Nome: " << aluno.nome << endl;
    cout << "Matrícula: " << aluno.matricula << endl;
    cout << "Nota 1: " << aluno.nota1 << endl;
    cout << "Nota 2: " << aluno.nota2 << endl;
    cout << "Nota 3: " << aluno.nota3 << endl;
    cout << "Média: " << media << endl;

    return 0;
}