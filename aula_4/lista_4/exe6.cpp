//6. Matriz de despesas
//Crie um array bidimensional despesas[ANO][TRIMESTRE], do tipo double, usando ANO = 2
//e TRIMESTRE = 4. Solicite as despesas de cada trimestre dos dois anos. Ao final, exiba uma
//tabela organizada por ano e trimestre e o total geral das despesas. Este exercício retoma
//diretamente o exercício do último slide.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int ANO = 2;
    const int TRIMESTRE = 4;
    double despesas[ANO][TRIMESTRE];
    double totalGeral = 0.0;

    // Solicita as despesas de cada trimestre dos dois anos
    for (int ano = 0; ano < ANO; ++ano) {
        for (int trimestre = 0; trimestre < TRIMESTRE; ++trimestre) {
            cout << "Digite as despesas do ano " << (ano + 1) << ", trimestre " << (trimestre + 1) << ": ";
            cin >> despesas[ano][trimestre];
            totalGeral += despesas[ano][trimestre];
        }
    }

    // Exibe a tabela organizada por ano e trimestre
    cout << "\nTabela de Despesas:\n";
    cout << setw(10) << "Ano" << setw(15) << "Trimestre" << setw(15) << "Despesas\n";
    cout << "----------------------------------------\n";

    for (int ano = 0; ano < ANO; ++ano) {
        for (int trimestre = 0; trimestre < TRIMESTRE; ++trimestre) {
            cout << setw(10) << (ano + 1)
                 << setw(15) << (trimestre + 1)
                 << setw(15) << fixed << setprecision(2) << despesas[ano][trimestre] << endl;
        }
    }

    // Exibe o total geral das despesas
    cout << "\nTotal Geral das Despesas: R$ " << fixed << setprecision(2) << totalGeral << endl;

    return 0;
}