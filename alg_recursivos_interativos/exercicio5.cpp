#include <iostream>
using namespace std;

void contagem(int N){
    if(N == 0){
        cout << N;
    }
    else{
        cout << N << ",";
        return contagem(N - 1);
    }
}

int main(){
    int N;

    cout<< "Digite um numero positivo para a contagem regressiva: ";
    cin >> N;

    contagem(N);
}