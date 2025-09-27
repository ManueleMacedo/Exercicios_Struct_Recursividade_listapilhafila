#include <iostream>
using namespace std;

int maior_elemento(int vetor[], int N){

    if(N ==1){
        return vetor[0];
    }else {
        int maior_do_resto = maior_elemento(vetor, N - 1);
    if (vetor[N - 1] > maior_do_resto) {
        return vetor[N - 1];

    } else {
        return maior_do_resto;
    }
    }
}

int main(){
    int N;
    
    cout << "--- Encontrando o Maior Elemento Recursivamente ---" << endl;
    cout << "Digite a quantidade de numeros (N) no vetor: ";
    cin >> N;
    
    if (N <= 0) {
        cout << "Tamanho invalido." << endl;
        return 0;
    }
    int* vetor = new int[N]; 

    cout << "--- Preencha os numeros ---" << endl;
    for (int i = 0; i < N; i++) {
        cin >> vetor[i];
    }
    
    int resultado = maior_elemento(vetor, N);

    cout << "O maior elemento encontrado e: " << resultado << endl;

    delete[] vetor;
    
    return 0;
}