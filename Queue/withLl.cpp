#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Queue {
    Node* head;
    Node* tail;
    int size;

public:
    Queue() {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    bool isEmpty() {
        return size == 0;
    }

    int getSize() {
        return size;
    }

    void enqueue(int ele) {
        Node* n = new Node(ele);

        if (isEmpty()) {
            head = tail = n;
        } else {
            tail->next = n;
            tail = n;
        }
        size++;
    }

    void dequeue() {
        if (isEmpty()) return;

        Node* temp = head;
        head = head->next;
        delete temp;
        size--;

        if (head == NULL) {
            tail = NULL;
        }
    }

    int front() {
        if (isEmpty()) return -1;
        return head->data;
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void display2() {
        while (!isEmpty()) {
            cout << front() << endl;
            dequeue();
        }
    }
};
