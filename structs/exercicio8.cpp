#include <iostream>
#include <string>
using namespace std;

struct Retangulo{
    float base_retangulo;
    float altura_altura;
};

void area(float base, float altura){
    float resultado;
    resultado = base * altura;
    cout << "A area do retangulo e: "<< resultado<< endl;
}

void perimetro(float base, float altura){
    float resultado;
    resultado = (base + altura) * 2;
    cout << "O perimetro do retangulo e: "<< resultado<< endl;
}

int main(){
    Retangulo meu_retangulo;

    cout << "Digite a base do retangulo: " << endl;
    cin >> meu_retangulo.base_retangulo;

    cout << "Digite a altura do retangulo: " << endl;
    cin >> meu_retangulo.altura_altura;

    area(meu_retangulo.base_retangulo, meu_retangulo.altura_altura);

    perimetro(meu_retangulo.base_retangulo, meu_retangulo.altura_altura);

    return 0;
}