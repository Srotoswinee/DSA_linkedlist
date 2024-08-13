#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int value){
        data=value;
        next=nullptr;
    }
};
void printLinkedlist(Node* head)
{
    Node* current=head;
    while(current!=nullptr)
    {
        cout<<current->data<<"->";
        current=current->next;
    }
    cout<<"nullptr"<<endl;
}
void appendNode(Node*& head,int value){
    Node* newNode=new Node(value);
    if(head==nullptr)
        {
            head=newNode;
            return;
        }
    Node* last=head;
    while(last->next!=nullptr){
        last=last->next;
    }
    last->next=newNode;
}
int main()
{
    Node* head = nullptr;
    appendNode(head, 10);
    appendNode(head, 20);
    appendNode(head, 30);
    appendNode(head, 40);
    cout << "Linked List: ";
    printLinkedlist(head);
    return 0;
}

