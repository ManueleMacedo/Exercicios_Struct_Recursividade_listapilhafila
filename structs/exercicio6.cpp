#include <iostream>
#include <string>
#include <limits>
using namespace std;

struct Livro{
    char titulo[50];
    char autor[50];
    int ano_publicacao;
};

void exibir_livros_ano(Livro livro[], int tamanho, int ano){
    for(int i=0; i<tamanho; i++){
        if (livro[i].ano_publicacao > ano){
            cout << "--- Info dos Livros ---" << endl;
            cout << "Titulo do livro: " << livro[i].titulo << endl;
            cout << "Autor do livro: " << livro[i].autor << endl;
            cout << "Ano de publicacao do livro: " << livro[i].ano_publicacao << endl;
        }
    }
}

int main(){
    int N;
    int ano_buscar;

    cout << "Defina a quantidade de livros que deseja cadastrar: " << endl;
    cin >> N;

    Livro* livros = new Livro[N];

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for(int i=0; i<N; i++){
        cout << "Digite o titulo do livro: " << endl;
        cin.getline(livros[i].titulo, 50);
        
        cout << "Digite o autor do livro: " << endl;
        cin.getline(livros[i].autor, 50);
        
        cout << "Digite o ano de publicacao do livro: " << endl;
        cin >> livros[i].ano_publicacao;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Digite o ano para a busca de livros apos ele: " << endl;
    cin >> ano_buscar;

    exibir_livros_ano(livros, N, ano_buscar);

    delete[] livros;
    return 0;
}