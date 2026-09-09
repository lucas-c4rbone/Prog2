// Exercício 3: Constantes e Cálculo Financeiro
// Desenvolva um programa para calcular o valor final de uma aplicação financeira. Declare uma taxa de
// juros fixa de 5% usando a diretiva #define TAXA_JUROS 0.05 e uma constante para o número de
// anos usando const int ANOS = 3 . Receba do usuário o valor do capital inicial. Calcule o montante
// acumulado ao final do período utilizando juros simples ($M = C imes (1 + ext{TAXA\_JUROS} imes
// ext{ANOS})$) e exiba a diferença entre o capital inicial e o montante final.

#include <iostream>
using namespace std;

#define taxa_juros 0.05

int main()
{
    double cInicial = 0;
    const int anos = 3;

    cout << "Digite seu Capital Inicial: " << endl;
    cin >> cInicial;

    double montante = cInicial * (1 + taxa_juros * anos);
    double diferenca = montante - cInicial;

    cout << "Montante final: R$" << montante << endl;
    cout << "Diferença entre capital inicial e montante final: R$" << diferenca << endl;
}