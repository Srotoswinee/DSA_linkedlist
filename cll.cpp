#include<iostream>
using namespace std;
class Node
{
    public:
        Node* next;
        int data;
        Node(int value){
            data=value;
            next=nullptr;
        }
};
void insertAtBeginning(Node*& head,int value)
{
    Node* newNode=new Node(value);
    if(head==nullptr)
    {
        head=newNode;
        newNode->next=head;
    }
    else{
        Node* temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        newNode->next=head;
        temp->next=newNode;
        head=newNode;
    }
}
void display(Node* head)
{
    if(head==nullptr)
    {
        cout<<"The list is empty:"<<endl;
        return;
    }
    Node* temp=head;
    cout<<temp->data<<" ";
    temp=temp->next;
    while(temp!=head)
    {
        cout<<temp->data<<" ";
        temp=temp->next;

    }
     cout<<endl;
}
int main()
{
    Node* head = nullptr;
    insertAtBeginning(head, 1);
    cout << "Newly added node: " << head->data << endl;
    insertAtBeginning(head, 2);
    cout << "Newly added node: " << head->data << endl;
    insertAtBeginning(head, 3);
    cout << "Newly added node: " << head->data << endl;
    insertAtBeginning(head, 4);
    cout << "Newly added node: " << head->data << endl;
    cout << "The entire list is: ";
    display(head);
    return 0;
}
