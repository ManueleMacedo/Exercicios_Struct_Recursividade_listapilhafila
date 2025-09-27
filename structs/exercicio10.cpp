#include <iostream>
#include <string>
#include <limits>
using namespace std;

struct ContaBancaria{
    char nome_titular[50];
    int numero_conta;
    float saldo;
};

void depositar_valor(ContaBancaria& conta, float valor){
    conta.saldo = conta.saldo + valor;
    cout << "Valor depositado com sucesso!";
}

void sacar_valor(ContaBancaria& conta, float valor){
    if(valor <= conta.saldo){
        conta.saldo = conta.saldo - valor;
        cout << "Valor sacado com sucesso!";
    }
    else{
        cout << "Valor maior do que o saldo!";
    }
}

void exibir_saldo(ContaBancaria conta){
    cout << "Seu saldo e: " << conta.saldo << endl;
}

int main(){
    ContaBancaria minhaconta;
    int opcao = 0;
    float valor;
    
    cout << "--- Dados da Conta ---" << endl;

    cout << "Digite o nome do titular da conta: " << endl;
    cin.getline(minhaconta.nome_titular, 50);

    cout << "Digite o numero da conta: " << endl;
    cin >> minhaconta.numero_conta;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Digite o Saldo da conta: " << endl;
    cin >> minhaconta.saldo;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    while(opcao != 4){
        cout << "O que vc deseja realizar?" << endl;
        cout << "1 - Depositar" << endl;
        cout << "2 - Sacar valor" << endl;
        cout << "3 - Exibir saldo" << endl;
        cout << "4 - Sair" << endl;
        cin >> opcao;

        switch (opcao){
            case 1:
                cout << "Digite o valor que deseja depositar: ";
                cin >> valor;
                depositar_valor(minhaconta, valor);
            break;

            case 2:
                cout << "Digite o valor que deseja sacar: ";
                cin >> valor;
                sacar_valor(minhaconta, valor);
            break;

            case 3:
                exibir_saldo(minhaconta);
            break;

            case 4:
            break;
            
            default:
            break;
        }
    }

    return 0;
}