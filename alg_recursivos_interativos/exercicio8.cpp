#include <iostream>
using namespace std;

int maior_elemento(int vetor[], int N){
    int maior = vetor[0];

    for(int i = 1; i <N; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }
    return maior;
}

int main(){
    int N;
    int maior;

    cout << "--- Descobrir maior valor de um vetor ---"<< endl;
    cout << "Digite quantos valores deseja adicionar ao vetor: ";
    cin >> N;

    int* vetor = new int[N];

    cout << "-- Preencha os valores --" << endl;
    for(int i=0; i <N; i++){
        cout << "Valor: ";
        cin >> vetor[i];
    }

    maior = maior_elemento(vetor, N);
    cout << "O maior valor do vetor e: " << maior;

    delete vetor;
    return 0;
}