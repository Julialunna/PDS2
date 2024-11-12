#include "list.hpp"

#include <iostream>

void List::insertNode(int data) {
    Node* aux = new Node;
    aux->data = data;
    aux->next = nullptr;
    if (head == nullptr) {
        head = aux;
        tail = aux;
    } else {
        tail->next = aux;
        tail = aux;
    }
}

void List::display() {
    Node* aux = head;
    while (aux != nullptr) {
        cout << aux->data << " ";
        aux = aux->next;
    }
    cout << endl;
}

// Você deverá implementar apenas esse método
void List::inverte() {

    if (head == nullptr || head->next == nullptr) {
        // Se a lista está vazia ou tem apenas um elemento, não há nada a inverter
        return;
    }

    Node* aux = this->tail;
    this->tail= this -> head;
    this->head =aux;

    Node* proximo_no = this->tail;
    Node* no_anterior = nullptr;
    Node *no_atual = nullptr;

    do{
        no_atual=proximo_no;
        proximo_no=no_atual->next;
        no_atual->next=no_anterior;
        no_anterior=no_atual; 
    }while(no_atual!=this->head);

}
