/*Insert after the nth node from the end*/
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
void insertafternthend(Node*& head,int value,int n)
{
    int size=0;
    Node* temp=head;
    while(temp!=nullptr)
    {
        size++;
        temp=temp->next;
    }
    int pos=size-n+1;
    if(pos<1 || pos>size)
    {
        cout<<"Invalid input!"<<endl;
        return;
    }
    Node* curr=head;
    for(int i=1;i<pos;i++)
    {
        curr=curr->next;
    }
    Node* newnode=new Node(value);
    newnode->next=curr->next;
    curr->next=newnode;
}
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    Node* head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    head->next->next->next->next=new Node(5);
    insertafternthend(head,100,2);
    printList(head);
    return 0;
}
