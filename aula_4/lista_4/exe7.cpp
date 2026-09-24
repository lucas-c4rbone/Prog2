//7. Array dinâmico e média dos valores
//Solicite a quantidade de elementos. Crie um array dinâmico usando new, leia os valores,
//calcule e exiba a média e, ao final, libere a memória com delete[].

#include <iostream>
using namespace std;

int main() {
    int quantidade;
    cout << "Digite a quantidade de elementos: ";
    cin >> quantidade;

    double* array = new double[quantidade];
    double soma = 0.0;

    for (int i = 0; i < quantidade; ++i) {
        cout << "Digite o valor para o elemento " << (i + 1) << ": ";
        cin >> array[i];
        soma += array[i];
    }

    double media = soma / quantidade;
    cout << "A média dos valores é: " << media << endl;

    delete[] array;
    return 0;
}