#include <iostream>
#include <string> 
using namespace std;

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main() {
   
    struct Pessoa aluno1;

    cout << "Digite o nome do aluno: " << endl;
    cin.ignore();
    cin.getline(aluno1.nome, 50);

    
    cout << "Digite a idade: " << endl;
    cin >> aluno1.idade;
    
    cout << "Digite a altura: " << endl;
    cin >> aluno1.altura;
   
    cout << "\n--- Dados da Pessoa ---\n" << endl;
    cout << "Nome: " << aluno1.nome << endl;
    cout << "Idade: " << aluno1.idade << endl;
    cout << "Altura: " << aluno1.altura << endl;
   
    return 0;
}