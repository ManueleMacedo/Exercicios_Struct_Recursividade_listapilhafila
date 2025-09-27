#include <iostream>
#include <string>
#include <limits>
using namespace std;

struct Paciente{
    char nome[50];
    int idade;
    char diagnostico[100];
};

void exibir_pacientes(Paciente pacientes[], int tamanho){
    cout << "-- Paciantes com idade maior ou igual 60 anos --" << endl;
    for(int i=0; i<tamanho; i++){
        if(pacientes[i].idade >=60){
            cout << "Nome: " << pacientes[i].nome << endl;
            cout << "Idade: " << pacientes[i].idade << endl;
            cout << "Diagnostico: " << pacientes[i].diagnostico << endl;
        }
    }
}

int main(){
    Paciente pacientes[5];

    for(int i=0; i<5; i++){
        cout << "Inserindo dados do paciente" << endl;
        
        cout << "Digite o nome: " << endl;
        cin.getline(pacientes[i].nome, 50);

        cout << "Idade: " << endl;
        cin >> pacientes[i].idade;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Digite o diagnostico: " << endl;
        cin.getline(pacientes[i].diagnostico, 100);
    }

    exibir_pacientes(pacientes, 5);

    return 0;
}