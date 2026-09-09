//Exercício 1: Tabela de Tipos e Modificadores
//Escreva um programa em C++ que declare variáveis utilizando os principais tipos primitivos e
//modificadores vistos em aula: char , int , float , double , bool , short , long e unsigned
//int . Atribua valores a cada uma delas e exiba no terminal o tipo, o valor armazenado e o tamanho em
//bytes ocupado na memória (utilize o operador sizeof ).

#include <iostream>
using namespace std;
int main() {
    char c = 'A';
    int i = 67;
    float f = 5.67f;
    double d = 11.965432465;
    bool b = true;
    short s = 32000;
    long l = 1234567890;
    unsigned int ui = 123;

    cout << "char: " << c << ", size: " << sizeof(c) << " bytes" << endl;
    cout << "int: " << i << ", size: " << sizeof(i) << " bytes" << endl;
    cout << "float: " << f << ", size: " << sizeof(f) << " bytes" << endl;
    cout << "double: " << d << ", size: " << sizeof(d) << " bytes" << endl;
    cout << "bool: " << b << ", size: " << sizeof(b) << " bytes" << endl;
    cout << "short: " << s << ", size: " << sizeof(s) << " bytes" << endl;
    cout << "long: " << l << ", size: " << sizeof(l) << " bytes" << endl;
    cout << "unsigned int: " << ui << ", size: " << sizeof(ui) << " bytes" << endl;

    return 0;
}