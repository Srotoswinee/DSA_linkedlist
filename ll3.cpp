/*Insert at position*/
#include<iostream>
using namespace std;

class Node {
public:
    Node* next;
    int data;
    Node(int value) {
        data = value;
        next = nullptr;
    }
};
void insertatpos(Node*& head, int pos, int value) {
    Node* newnode = new Node(value);

    if (pos < 1) {
        cout << "Invalid position!" << endl;
        return;
    }
    if (pos == 1) {
        newnode->next = head;
        head = newnode;
        return;
    }
    Node* curr = head;
    for (int i = 1; i < pos - 1; i++) {
        if (curr == nullptr) {
            cout << "Invalid position!" << endl;
            return;
        }
        curr = curr->next;
    }
    if (curr == nullptr) {
        cout << "Invalid position!" << endl;
    } else {
        newnode->next = curr->next;
        curr->next = newnode;
    }
}
void printlist(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    cout<<"List before insertion"<<endl;
    printlist(head);
    insertatpos(head, 2, 4);
    cout << "List after insertion at position 2: ";
    printlist(head);
    return 0;
}
