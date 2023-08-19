#include<iostream>
using namespace std;

//TRAVERSAL
//INSERT AT BEGINNING
//INSERT AT END 
//INSERT IN MIDDLE
//DELETE AT BEGINNING
//DELETE AT END 
//DELETE IN MIDDLE
//MEMORY FREEING AFTER DELETION (MECH: WHICHEVER ELEMENT YOU WANT TO DELETE, MAKE SURE TO FREE ITS POINTER TO NULL BEOFRE DELETING IT. YOU MAY CAPTURE THE ELEMENT IN A TEMPORARY NODE POINTER TO THEN LATER DELETE IT.)

class Node{
    public:

    int data;
    Node * next;

    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }

    ~Node()
    {
        int value = this -> data;
        if(this -> next != NULL)
        {
            //FREEING MEMORY
            delete next;
            this -> next = NULL;
        }
        cout<<"memory freed for the node containing data "<<value<<endl;
    }

};

    void insertAtHead(Node*  &head, int data)
    {
        Node* temp = new Node(data);
        temp ->  next = head;
        head = temp;
    }

    void insertAtTail(Node* &tail, int data)
    {
        Node* temp = new Node(data);
        tail -> next = temp;
        tail = temp;
    }

    void insertAtMiddle(Node* &tail, Node* &head, int position, int data)
    {
        if(position == 1)
        {
            insertAtHead(head, data);
            return;
        }

        Node* temp = head;

        int i = 1;
        while(i<position-1)
        {
            temp = temp -> next;
            i++;
        }

        if(temp -> next == NULL)
        {
            insertAtTail(tail, data);
            return;
        }

        Node* newNode = new Node(data);
        newNode -> next = temp -> next;
        temp -> next =  newNode;

    }

    void deleteAtPosition(Node* &head,int position, Node* &tail)
    {
        //DELETE AT HEAD
        if(position == 1)
        {
            Node* temp = head;
            head = head -> next;

            //FREEING MEMORY
            temp -> next = NULL; //FIRST REMOVE THE POINTER
            delete temp;
            return;
        }

        Node* temp = head;

        int i =1;
        while(i<position-1)
        {
            temp = temp -> next;

        //DELETING AT TAIL
        if(temp -> next -> next == NULL)
        {
            Node* lastNode = tail;
            tail = temp;
            tail -> next = NULL;
            delete lastNode;
            return;
        }

            i++;
        }

        //DELETE AT ANY OTHER POSITION
        Node* middleNode = temp -> next;
        temp -> next = temp -> next -> next;

        middleNode -> next = NULL;
        delete middleNode;


    }

    void print(Node* &head)
    {
        Node* temp = head;

        while(temp != NULL)
        {
            cout<<temp -> data<<" ";
            temp = temp -> next;
        }
    }

int main()
{ 
    Node* head = new Node(10);    
    Node* tail = head;                   

    insertAtTail(tail, 12);

    print(head);
    cout<<endl;

    insertAtTail(tail, 16);

    print(head);
    cout<<endl;

    insertAtMiddle(tail, head, 4, 176);

    print(head);
    cout<<endl;

    deleteAtPosition(head, 2, tail);
    print(head);

    cout<<endl<<"data of head and tail"<<endl;
    cout<< head -> data<<" ";
    cout<< tail -> data;


    return 0;
}