#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

int getlength(Node* head) {
    int length = 0;
    Node* temp = head;
    while (temp != nullptr) {
        length++;
        temp = temp->next;
    }
    return length;
}

void insertatmid(Node* head, int value) {
    int mid = 0;  // Declare mid once, and use it later
    Node* newNode = new Node(value);
    int length = getlength(head);

    if (length % 2 == 0) {
        mid = length / 2;
    } else {
        mid = (length + 1) / 2;
    }

    Node* temp = head;
    for (int i = 0; i < mid - 1; i++) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    cout << "Original list: ";
    printList(head);

    insertatmid(head, 99);

    cout << "After insertion at the middle: ";
    printList(head);

    return 0;
}
