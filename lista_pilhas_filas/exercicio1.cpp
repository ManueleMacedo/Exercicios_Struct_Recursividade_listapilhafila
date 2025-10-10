#include <iostream>
using namespace std;

struct No{
    int dado;
    No* prox;
};

No* inserir_inicio(No* head, int valor){
    No* novoNo = new No;
    novoNo->dado = valor;
    novoNo->prox = head;
    return novoNo;
}

No* inserir_fim(No* head, int valor){
    No* novoNo = new No;
    novoNo->dado = valor;
    novoNo->prox = NULL;

    if(head == nullptr){
        return novoNo;
    }

    No* temp = head;
    while(temp->prox != nullptr){
    temp = temp->prox;
    }
        
    temp->prox = novoNo;
    return head;
}

void imprimirLista(No* head) {
    No* temp1 = head;
    while (temp1) {
        cout << temp1->dado << " -> ";
        temp1 = temp1->prox;
    }
    cout << "NULL \n";
}


int main(){
    No* head = NULL;
    
    head = inserir_inicio(head, 20);
    head = inserir_inicio(head, 10);
    head = inserir_inicio(head, 35);
    head = inserir_fim(head, 2);

    imprimirLista(head);
    return 0;
}