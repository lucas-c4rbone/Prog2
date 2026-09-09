//Exercício 2: Calculadora de Conversão e Formatação
//Crie um programa que solicite ao usuário o valor de uma temperatura em graus Celsius (grau decimal /
//double ). Calcule e imprima a conversão para Fahrenheit ($F = C imes 1.8 + 32$) e Kelvin ($K = C +
//273.15$). Em seguida, converta o valor da temperatura calculada em Fahrenheit para um número
//inteiro (através de static_cast<int> ) e exiba o resultado inteiro na tela. 

#include <iostream>
using namespace std;

int main() {
    double c = 0;
    cout << "Digite a temperatura em Celsius: " << endl;
    cin >> c;

    double f = c * 1.8 + 32.0;
    double k = c + 273.15;
    int fInteiro = static_cast<int>(f);

    cout << c << " Celcius em Fahrenheit é " << f << " F." << endl;
    cout << c << " Celcius em Kelvin é " << k << " K." << endl;
    cout << f << " Fahrenheit convertido para inteiro é " << fInteiro << " F." << endl;

    return 0;
}