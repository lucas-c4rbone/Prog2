//De acordo com uma idade fornecida pelo usuário, imprima se esta idade se adequa as faixas:
//a. Bebê (0-1)
//b. Criança (1-10)
//c. Adolescente ( 11-17)
//d. Adulto (18-64)
//e. Idoso (65-100)

#include <iostream>
using namespace std;

int main() {
    int idade;
    cout << "Digite sua idade: ";
    cin >> idade;

    if (idade >= 0 && idade <= 1) {
        cout << "Bebê" << endl;
    } else if (idade >= 1 && idade <= 10) {
        cout << "Criança" << endl;
    } else if (idade >= 11 && idade <= 17) {
        cout << "Adolescente" << endl;
    } else if (idade >= 18 && idade <= 64) {
        cout << "Adulto" << endl;
    } else if (idade >= 65 && idade <= 100) {
        cout << "Idoso" << endl;
    } else {
        cout << "Idade inválida" << endl;
    }

    return 0;
}