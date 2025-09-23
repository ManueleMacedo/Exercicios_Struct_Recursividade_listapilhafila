#include <iostream>
#include <string>
#include <limits>
using namespace std;

struct funcionario {
    char nome[50];
    char cargo[30];
    float salario;
};

int main() {
    int N;
    
    cout << "Digite a quantidade de funcionarios que deseja cadastrar: ";
    cin >> N;
    
    funcionario* funcionarios = new funcionario[N];
    
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    for (int i = 0; i < N; i++) {
        cout << "\n--- Funcionario " << i + 1 << " ---" << endl;
        
        cout << "Digite o nome: ";
        cin.getline(funcionarios[i].nome, 50);

        cout << "Digite o cargo: ";
        cin.getline(funcionarios[i].cargo, 30);

        cout << "Digite o salario: ";
        cin >> funcionarios[i].salario;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "\n-- Info. dos funcionarios --" << endl;

    for (int i = 0; i < N; i++) {
        cout << "Nome: " << funcionarios[i].nome << endl;
        cout << "Cargo: " << funcionarios[i].cargo << endl;
        cout << "Salario: R$ " << funcionarios[i].salario << endl;
    }

    delete[] funcionarios;
    return 0;
}