//Uma empresa decide dar um reajuste a seus funcionários de acordo com o seguinte critério: 50% de aumento para os que ganham menos de R$ 3.000,00, 20% para os que ganham entre R$ 3.000,00 e R$ 10.000,00 (inclusive) e 15% para os demais. Escreva um algoritmo para calcular este reajuste.

#include <iostream>
using namespace std;


int main() {
    int sal;
    cout << "Digite seu salário: ";
    cin >> sal;

    if (sal < 3000){
        sal = sal + (sal * 0.5);
        cout << "Seu novo salário é: " << sal << endl;
    }
    else if (sal >= 3000 && sal <= 10000){
        sal = sal + (sal * 0.2);
        cout << "Seu novo salário é: " << sal << endl;
    }
    else {
        sal = sal + (sal * 0.15);
        cout << "Seu novo salário é: " << sal << endl;
    }
    return 0;
}