//Crie dois namespaces chamados Geometria::Retangulo e Geometria::Circulo (namespaces
//aninhados). No namespace Retangulo , crie a função calcularArea(double b, double h) . No
//namespace Circulo , crie a função calcularArea(double r) usando const double PI =
//3.14159 . No main , demonstre o uso das duas funções de 3 formas diferentes: via nome totalmente
//namespace Circulo , crie a função calcularArea(double r) usando const double PI = 3.14159 . No main , demonstre o uso das duas funções de 3 formas diferentes: via nome totalmente qualificado, via declaração using específica e via diretiva using namespace . 

#include <iostream>
using namespace std;

namespace Geometria {
    namespace Retangulo {
        double calcularArea(double b, double h) {
            return b * h;
        }
    }
    namespace Circulo {
        const double PI = 3.14159;
        double calcularArea(double r) {
            return PI * r * r;
        }
    }
}

int main() {
    cout << "Área do retângulo (qualificado): " << Geometria::Retangulo::calcularArea(3, 4) << endl;
    cout << "Área do círculo (qualificado): " << Geometria::Circulo::calcularArea(5) << endl;

    {
        using Geometria::Retangulo::calcularArea;
        cout << "Área do retângulo (using específica): " << calcularArea(3, 4) << endl;
    }

    {
        using namespace Geometria::Circulo;
        cout << "Área do círculo (using namespace): " << calcularArea(5) << endl;
    }

    return 0;
}