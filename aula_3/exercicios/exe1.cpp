//Elabore um algoritmo que com base em um ano digitado pelo usuário, diga se é um ano que haverá copa ou não.

#include <iostream>
using namespace std;

int main() {
    int ano;
    cout << "Digite um ano: ";
    cin >> ano;

    switch (ano % 4) {
        case 2:
            cout << "Haverá copa neste ano. VAI BRASIIL!" << endl;
            break;
        default:
            cout << "Não haverá copa neste ano." << endl;
            break;
    }
    return 0;
}