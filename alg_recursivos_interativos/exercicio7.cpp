#include <iostream>

using namespace std;

int main(){
    int N;

    cout<< "Digite um numero para a contagem regressiva: ";
    cin >> N;

    if(N == 0){
        cout << N;
    }
    else{
        while(N>=0){
            if(N==0){
                cout << N << ".";
                break;
            }
            else{
                cout << N << ",";
                N = N-1;
            }
        }
    }

    return 0;
}