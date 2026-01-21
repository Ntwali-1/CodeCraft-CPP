#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;

    Node (int val){
        this->data = val;
    }
};

void display(Node *head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}

int main () {
    Node *n1 = new Node(10);
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);

    n1->prev = nullptr;
    n1->next = n2;

    n2->prev = n1;
    n2->next = n3;

    n3->prev = n2;
    n3->next = nullptr;

    display(n1);
}
