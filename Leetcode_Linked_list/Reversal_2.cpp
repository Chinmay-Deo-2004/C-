#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

    void reverseSection(ListNode* prev, ListNode* curr, ListNode* &head, int left, int right){
        ListNode* nextChain;

            if(curr -> val == right)
            {
                cout<<"end reached"<<curr -> val<<" "<<endl;;
                head -> next = curr;
                return;
            }
        if(curr -> val != right)
        {
            cout<<curr -> val<<" ";

            reverseSection(curr, curr -> next, head, left, right);
            cout<<curr -> val;
            curr -> next = prev;
            if(curr -> val == left)
                curr -> next = nextChain;

        }


    }

    ListNode* reverseBetween(ListNode* &head, int left, int right) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr -> val != left)
        {
            prev = curr;
            curr = curr -> next;

        }
        reverseSection(prev, curr, head, left, right);
        return(head);
    }



void printLL(ListNode* &head)
{
    ListNode* curr = head;
    while(curr)
    {
        cout<<curr -> val<<" ";
        curr = curr -> next;
    }
}

int main()
{
    ListNode* node4 = new ListNode(5);
    ListNode* node3 = new ListNode(4, node4);
    ListNode* node2 = new ListNode(3, node3);
    ListNode* node1 = new ListNode(2, node2);
    ListNode* head = new ListNode(1, node1);

    printLL(head);
    cout<<endl;

    reverseBetween(head, 2, 4);

    printLL(head);

    return 0;
}