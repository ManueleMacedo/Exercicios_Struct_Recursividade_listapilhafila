#include <iostream>
using namespace std;

int produto(int N1, int N2){
    int produto = 0;
    for(int i=0; i<N2; i++){
        produto = produto + N1;
    }
    return produto;
}
int main(){
    int N1, N2;
    int resultado;

    cout << "--- Produto de dois numeros ---"<< endl;
    cout << "Digite o 1 numero: ";
    cin >> N1;
    cout << "Digite o 2 numero: ";
    cin >> N2;

    resultado = produto(N1, N2);

    cout << "O resultado dos produtos e: " << resultado;

    return 0;
}