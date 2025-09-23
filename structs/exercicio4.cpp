#include <iostream>
#include <string>
using namespace std;

struct Carro{
    char modelo[30];
    int ano;
    float preco;
};

int main(){
    Carro* meuCarro = new Carro;

    cout << "-- Inserir dados do carro --" << endl;
    cout << "Digite o modelo do carro" << endl;
    cin.getline(meuCarro->modelo, 30);

    cout << "Digite o ano do carro" << endl;
    cin >> meuCarro->ano;

    cout << "Digite o preco do carro" << endl;
    cin >> meuCarro->preco;

    cout << "--- info. Carro ---" << endl;
    cout << "Modelo do carro: " << meuCarro->modelo << endl;
    cout << "Ano do carro: " << meuCarro->ano << endl;
    cout << "Preco do carro: " << meuCarro->preco << endl;

    delete meuCarro;
    return 0;
}