#include <iostream>
using namespace std;

void imprimir_produto(int N1, int N2){
     if (N2 == 1) {
        cout << N1;
        return;
    } else {
        imprimir_produto(N1, N2 - 1);
        cout << " + ";
        cout << N1;
    }
}

int produto(int N1, int N2){
    if(N2 == 0){
        return 0;
    }else{
        return N1 + produto(N1, N2-1);
    }
}

int main(){
    int N1, N2;

    cout << "Digite o 1 numero: ";
    cin >> N1;
    cout << "Digite o 2 numero: ";
    cin >> N2;

    imprimir_produto(N1, N2);
    cout << " = " << produto(N1, N2) << endl; 

    return 0;

}