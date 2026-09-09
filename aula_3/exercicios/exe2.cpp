//Peça para o usuário digitar um número inteiro e exiba a frequência Fibonacci até este número.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Digite um número inteiro: ";
    cin >> n;

    int a = 0, b = 1, c;
    cout << "Fibonacci até " << n << ": " << a << " " << b << " ";
    c = a + b;
    while (c <= n) {
        cout << c << " ";
        a = b;
        b = c;
        c = a + b;
    }
    cout << endl;
    return 0;
}