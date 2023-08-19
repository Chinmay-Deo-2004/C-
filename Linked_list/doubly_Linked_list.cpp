#include<iostream>
using namespace std;

//TRAVERSE DLL
//PRINT DLL
//INSERT AT HEAD OF DLL
//INSERT AT TAIL OF DLL
//INSERT IN MIDDLE OF DLL

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d)
    {
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }
};

void printLL(Node* &head)
{
    Node* temp = head;
    while(temp)
    {
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
}

void findLength(Node* &head)
{
        Node* temp = head;
        int len = 0;

    while(temp)
    {
        len++;
        temp = temp -> next;
    }
    cout<<len;
}

void insertAtHead(Node* &head, int data)
{
    Node* temp = new Node(data);
    Node* curr = head;

    temp -> prev = curr -> prev;
    temp -> next = curr;
    curr -> prev = temp;
    head = temp;
    
}

void insertAtTail(Node* &tail, int data)
{
    Node* temp = new Node(data);
    Node* curr = tail;

    temp -> next = NULL;
    curr -> next = temp;
    temp -> prev = curr;
    tail = temp;

}

void insertAtMiddle(Node* &head, int position, int data)
{
    Node* temp = new Node(data);
    Node* curr = head;
    int c = 1;
    while(c<position)
    {
        curr = curr -> next;
        c++;
    }

    temp -> next = curr -> next;
    curr -> next -> prev = temp;
    curr -> next = temp;
    temp -> prev = curr;
}


int main()
{
    Node* head = new Node(10);
    Node* tail = head;

    insertAtHead(head, 20);

    printLL(head);
    cout<<endl;

    findLength(head);
    cout<<endl;

    insertAtTail(tail, 56);
    cout<<endl;

    printLL(head);
    cout<<endl;

    insertAtMiddle(head, 2, 700);
    printLL(head);
    cout<<endl;

    return 0;
}