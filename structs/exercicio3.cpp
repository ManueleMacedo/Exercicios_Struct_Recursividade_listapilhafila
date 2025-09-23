#include <iostream>
#include <string>
using namespace std;

struct Produto{
    char nome[30];
    int codigo;
    float preco;
};

void mostrar_produto(Produto p){
    cout << "Nome do Produto: " << p.nome << endl;
    cout << "Codigo do produto: " << p.codigo << endl;
    cout << "Preco do produto: " << p.preco << endl;
}

int main(){
    Produto produtos;

    cout << "--- Inserir Dados do Produto ---" << endl;
    cout << "Digite o nome do produto: " << endl;
    cin.getline(produtos.nome, 30);

    cout << "Digite o codigo do produto: " << endl;
    cin >> produtos.codigo;

    cout << "Digite o preco do produto: " << endl;
    cin >> produtos.preco;

    mostrar_produto(produtos);

    return 0;
}