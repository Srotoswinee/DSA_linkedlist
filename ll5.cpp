#include<iostream>
#include<stack>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int value)
    {
        data=value;
        next=nullptr;
    }
};
bool palindrome(Node* head)
{
    stack<int>st;
    if(head==nullptr)
    {
        return true;
    }
    Node* temp=head;
    while(temp!=nullptr)
    {
        st.push(temp->data);
        temp=temp->next;
    }
    temp=head;
    while(temp!=nullptr)
    {
        if(temp->data!=st.top())
        {
            return false;
        }
        st.pop();
        temp=temp->next;
    }
    return true;
}
void printlist(Node* head)
{
    Node* curr=head;
    if(curr!=nullptr)
    {
        cout<<curr->data<<" "<<endl;
        curr=curr->next;
    }
    cout<<endl;
}
int main()
{
    Node* head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(2);
    head->next->next->next=new Node(1);
    palindrome(head);
    printlist(head);
    return 0;
}


