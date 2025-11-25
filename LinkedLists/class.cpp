#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
};
void display(Node *head){
        while(head!=NULL){
            cout << head->data << "->";
            head = head->next;
        }
}

Node *deleteFirstNode(Node * head){
    if(head == null){
        return NULL;
    }
    Node *temp = head;
    head = temp->next;
    delete temp;
    return head;
}

int main () {
    Node *n1 = new Node();
    Node *n2 = new Node();
    Node *n3 = new Node();
    Node *n4 = new Node();

    n1->data = 10;
    n1->next = n2;
    n2->data = 20;
    n2->next = n3;
    n3->data = 30;
    n3->next = n4;
    n4->data = 40;
    n4->next = NULL;

    Node *head = n1;


    display(head);

    cout << "\n" << endl;

    Node *n5 = new Node();
    n5->data = 0;
    n5->next = n1;
    head = n5;

    display(head);

    return 0;
}
