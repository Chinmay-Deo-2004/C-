#include<iostream>
using namespace std;

//TRAVERSE DLL
//PRINT DLL
//INSERT AT HEAD OF DLL
//INSERT AT TAIL OF DLL
//INSERT IN MIDDLE OF DLL
//DELETE FROM HEAD, TAIL AND MIDDLE OF DLL

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

    ~Node()
    {
        int value = this -> data;
        if(this -> next != NULL)
        {
            delete next;
            this -> next = NULL;
        }
        cout<<"memory freed for element with data "<<value<<endl;
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
    if(head == NULL)
    {
        Node* temp = new Node(data);
        head = temp;
    }
    else
    {
        Node* temp = new Node(data);
        Node* curr = head;

        temp -> prev = curr -> prev;
        temp -> next = curr;
        curr -> prev = temp;
        head = temp;
    }

    
}

void insertAtTail(Node* &tail, int data)
{
    if(tail == NULL)
    {
        Node* temp = new Node(data);
        tail = temp;
    }
    else{
        Node* temp = new Node(data);
        Node* curr = tail;

        temp -> next = NULL;
        curr -> next = temp;
        temp -> prev = curr;
        tail = temp;
    }


}

void insertAtMiddle(Node* &head, int position, int data)
{
    Node* temp = new Node(data);
    Node* curr = head;
    int c = 1;
    while(c<position-1)
    {
        curr = curr -> next;
        c++;
    }

    temp -> next = curr -> next;
    curr -> next -> prev = temp;
    curr -> next = temp;
    temp -> prev = curr;
}

void deleteAtAny(Node* &head, int position, Node* &tail)
{
    if(position == 1)
    {
        Node * temp = head;
        head = temp -> next;

        temp -> next = NULL;
        temp -> prev = NULL;
        delete temp;
        return;
    }

    Node* curr = head;
    int c=1;
    while(c<position-1)
    {
        curr = curr -> next;
        if(curr -> next -> next == NULL)
        {
            Node* temp = tail;
            curr -> next = NULL;
            tail = curr;

            temp -> next = NULL;
            temp -> prev = NULL;
            delete temp;
            return;
        }
        c++;
    }

    Node* temp = curr -> next;
    curr -> next = curr -> next -> next;
    curr -> next -> prev = curr;

    temp -> next = NULL;
    temp -> prev = NULL;
    delete temp;

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

    deleteAtAny(head, 1, tail);
    printLL(head);

    return 0;
}