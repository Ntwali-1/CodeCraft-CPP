#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// print linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* merge(Node* left, Node* right) {
    if (!left) return right;
    if (!right) return left;

    Node* result = NULL;

    if (left->data <= right->data) {
        result = left;
        result->next = merge(left->next, right);
    } else {
        result = right;
        result->next = merge(left, right->next);
    }

    return result;
}

Node* findMiddle(Node* head) {
    if (head == NULL || head->next == NULL)
        return head;

    Node* slow = head;
    Node* fast = head->next;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

Node* mergeSort(Node* head) {
    if (head == NULL || head->next == NULL)
        return head;

    Node* middle = findMiddle(head);
    Node* rightHead = middle->next;
    middle->next = NULL;

    Node* left = mergeSort(head);
    Node* right = mergeSort(rightHead);

    return merge(left, right);
}

int main() {
    Node* head = new Node(4);
    head->next = new Node(2);
    head->next->next = new Node(1);
    head->next->next->next = new Node(5);
    head->next->next->next->next = new Node(3);

    cout << "Original List: ";
    printList(head);

    head = mergeSort(head);

    cout << "Sorted List: ";
    printList(head);

    return 0;
}
