#include <iostream>
using namespace std;

int soma_digitos(int N) {
    if (N < 10) {
        return N;
    }else {
        return (N % 10) + soma_digitos(N / 10);
    }
}

void imprime_soma_digitos(int N){
    if(N<10){
        cout << N;
        return;
    }else{
        imprime_soma_digitos(N/10);

        cout << " + ";

        cout << (N%10);
    }
}

int main(){
    int N;
    cout << "Digite um numero positivo para somar seus digitos: ";
    cin >> N;

    imprime_soma_digitos(N);

    cout << " = " << soma_digitos(N) << endl; 

    return 0;
}