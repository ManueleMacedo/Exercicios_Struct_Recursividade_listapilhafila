#include <iostream>
#include <string>
#include <limits>
#include <cstring>
using namespace std;

struct Contato {
    char nome[50];
    char telefone[15];
};

int main(){
    Contato contatos[5];
    char busca[50];

    for(int i=0; i<5; i++){
        cout << "--- Adicionando Contato ---" << endl;
        
        cout << "Digite o nome do contato: " << endl;
        cin.getline(contatos[i].nome, 50);

        cout << "Digite o autor do contato: " << endl;
        cin.getline(contatos[i].telefone, 15);
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Digite o nome do contato que deseja buscar: " << endl;
    cin.getline(busca, 50);

    for(int i=0; i<5; i++){
        if(strcmp(contatos[i].nome, busca) ==0){
            cout << "--- Busca encontrada ---" << endl;
            cout << "Nome do contato: " << contatos[i].nome << endl;
            cout << "Telefone: " << contatos[i].telefone << endl;
        }
    }

    return 0;
}