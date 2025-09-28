#include <iostream>
using namespace std;

int somar_digitos(int N){
    int soma = 0;

    while(N!=0){
        int digito = N % 10;
        soma = soma + digito;
        N = N/10;
    }
    return soma;
}
int main(){
    int N;
    int resultado;

    cout << "Digite um valor para somar os digitos dele: ";
    cin >> N;

    resultado = somar_digitos(N);

    cout << "A soma dos digitos e: "<< resultado;

    return 0;
}