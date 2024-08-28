#include<iostream>
using namespace std;
class Node {
public:
    Node* next;
    Node* prev;
    int data;
    Node(int value) {
        data = value;
        prev = nullptr;
        next = nullptr;
    }
};
void insertAtStart(Node*& head, int value) {
    Node* newnode = new Node(value);
    newnode->next = head;
    if (head != nullptr) {
        head->prev = newnode;
    }
    head = newnode;
}
void insertattheend(Node*& head,int value){
    Node* newnode=new Node(value);
    head=temp;
    while(head==nullptr)
    {
        newnode->prev=nullptr;
        head=newnode;
        return;
    }
    while(temp!=nullptr)
    {
        temp=temp->next;
    }
    newnode->prev=temp;
    newnode->next=nullptr;
}
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main() {
    Node* head = new Node(1);
    head->next = new Node(20);
    head->next->prev = head;
    head->next->next = new Node(3);
    head->next->next->prev = head->next;

    cout << "Original List: ";
    printList(head);

    insertAtStart(head, 4);
    cout << "List after inserting at the start: ";
    insertattheend(head,5);
    cout<<"List after inserting at the end:";
    printList(head);

    return 0;
}
