#include <iostream>
#include <string> 
using namespace std;

struct Aluno{
    char nome[50];
    int matricula;
    float nota;
};

int main() {
    Aluno alunos[5];
    float soma= 0;
    float media = 0;

    for(int i=0; i<5; i++){
        cout << "Digite o nome do aluno: " << endl;
        cin.ignore();
        cin.getline(alunos[i].nome, 50);

        cout << "Digite a matricula do aluno: " << endl;
        cin >> alunos[i].matricula;

        cout << "Digite a nota do aluno: " << endl;
        cin >> alunos[i].nota;
    }

    for(int i=0; i<5; i++){
        soma = soma + alunos[i].nota;
    }

    media = soma / 5.0;

    cout << "--- RESULTADO ---" << endl;
    cout << "a media das notas é: " << media << endl;

    return 0;
}