//3. Conversão de dólares para reais com função inline
//Solicite uma quantia em dólares e a cotação do dólar em reais. Implemente uma função
//inline para realizar a conversão e retornar o valor em reais

#include <iostream>
using namespace std;

inline double converterDolarParaReal(double valorDolar, double cotacaoDolar) {
    return valorDolar * cotacaoDolar;
}

int main() {
    double valorDolar, cotacaoDolar;

    cout << "Digite o valor em dólares: ";
    cin >> valorDolar;

    cout << "Digite a cotação do dólar em reais: ";
    cin >> cotacaoDolar;

    double valorReal = converterDolarParaReal(valorDolar, cotacaoDolar);

    cout << "O valor em reais é: R$ " << valorReal << endl;

    return 0;
}
