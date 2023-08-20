#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d)
    {
        this -> data = d;
        this -> next = NULL;
    }

    ~Node()
    {

    }
};

void insertAfter(int ele, int data, Node* &tail)
{
    Node* curr = tail;
    while(curr -> data != ele)
    {
        curr = curr -> next;
    }

    Node* temp = new Node(data);
    temp -> next = curr -> next;
    curr -> next = temp;

    if(curr = tail)
    tail = temp;
}

void printCL(Node* &tail)
{
    Node* temp = tail;
    temp = temp -> next;

    while(temp != tail)
    {
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }

    cout<<tail -> data<<" ";
}

void deleteNode(int ele, Node* &tail)
{
    Node* curr = tail;

    while(curr -> next -> data != ele )
    {
        curr = curr -> next;
    }
    curr -> next = curr -> next -> next;
}

int main()
{
    Node* tail = new Node(10);
    tail -> next = tail;

    insertAfter(10, 20, tail);

    printCL(tail);
    cout<<endl;

    insertAfter(20, 67, tail);

    printCL(tail);
    cout<<endl;

    insertAfter(20, 98, tail);

    printCL(tail);
    cout<<endl;

    cout << tail -> data << endl;

    deleteNode(20, tail);
    printCL(tail);
    cout<<endl;

    return 0;
}