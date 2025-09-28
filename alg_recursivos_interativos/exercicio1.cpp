#include <iostream>
using namespace std;

int contar_digitos(int N){
    if(N <10){
        return 1;
    }
    else{
        return 1 + contar_digitos(N/10);
    }
}

int main(){
    int N;
    int resultado;

    cout << "Digite um numero positivo para mostrar a quantidade de caracter dele: ";
    cin >> N;

    resultado = contar_digitos(N);

    cout << "Quantidade de caracter: " << resultado;
    
    return 0;
}