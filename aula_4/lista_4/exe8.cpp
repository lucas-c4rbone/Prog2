//8. Inserção em array dinâmico
//Leia a quantidade e os valores de um array dinâmico. Depois, solicite um novo valor para
//inserir ao final. Crie outro array com uma posição a mais, copie os elementos, adicione o
//novo valor, libere o array antigo com delete[] e atualize o ponteiro. Exiba o array final.
//Desafio complementar: adapte o exercício 8 para permitir a remoção de um elemento
//indicado pelo usuário, seguindo o processo de criar um novo array, copiar os elementos
//restantes, liberar a memória antiga e atualizar o ponteiro.

#include <iostream>
using namespace std;

int main() {
    int quantidade;
    cout << "Digite a quantidade de elementos: ";
    cin >> quantidade;

    double* array = new double[quantidade];

    for (int i = 0; i < quantidade; ++i) {
        cout << "Digite o valor para o elemento " << (i + 1) << ": ";
        cin >> array[i];
    }

    double novoValor;
    cout << "Digite um novo valor para inserir ao final: ";
    cin >> novoValor;

    double* novoArray = new double[quantidade + 1];
    for (int i = 0; i < quantidade; ++i) {
        novoArray[i] = array[i];
    }
    novoArray[quantidade] = novoValor;

    delete[] array;
    array = novoArray;
    quantidade++;

    cout << "Array final após inserção:\n";
    for (int i = 0; i < quantidade; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    int indiceRemover;
    cout << "Digite o índice do elemento a ser removido (0 a " << (quantidade - 1) << "): ";
    cin >> indiceRemover;

    if (indiceRemover >= 0 && indiceRemover < quantidade) {
        double* arrayRemovido = new double[quantidade - 1];
        for (int i = 0, j = 0; i < quantidade; ++i) {
            if (i != indiceRemover) {
                arrayRemovido[j++] = array[i];
            }
        }

        delete[] array;
        array = arrayRemovido;
        quantidade--;

        cout << "Array final após remoção:\n";
        for (int i = 0; i < quantidade; ++i) {
            cout << array[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Índice inválido. Nenhum elemento removido." << endl;
    }

    delete[] array;
    return 0;
}