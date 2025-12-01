#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node (int val){
        this->data = val;
    }
};

void display(Node* head) {
    if (head == nullptr) return;

    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
}


int main (){
    Node *n1 = new Node(10);
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);

    n1->next = n2;

    n2->next = n3;

    n3->next = n1;

    display(n1);
}

