#include "LinkedList.h"

LinkedList::LinkedList() {
    this->head = nullptr;
    this->tail = nullptr;
}

void LinkedList::push(long long num, const string& line) {
    node* nodo = new node;
    nodo->data = num;
    nodo->line = line;
    nodo->next = head;
    head = nodo;
}

void LinkedList::print(long long  num ) {
    node* current = head;
    while (current != nullptr) {
        if(num==current->data){
        cout << "IP: " << current->data << " - Line: " << current->line << "\n";
        }
        current = current->next;
    }
}
