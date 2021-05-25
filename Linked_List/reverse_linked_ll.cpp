#include<iostream>
using namespace std;


class node{
    public:
    int data;
    node* next;


    node(int val)
    {
        data = val;
        next = NULL;

    } 
};
    // INSERT AT THE TAIL OF LINKED_LIST
void insertAtTail(node* &head, int val)
{
    node* n = new node(val);
    
     if(head == NULL)
    {
        head = n;
        return; 
    }

    node* temp = head;

    while(temp -> next != NULL)         
    {
        temp = temp -> next;

    }

    temp -> next = n;
}

void display(node *head)
{
    node* temp =head;
    while(temp!=NULL)
    {
        cout << temp -> data << "->";
        temp = temp -> next;

    }

    cout << "NULL" << endl;
}
// DELETION in Linked_list
void deleteAtHead(node* &head)
{
    node* toDelete = head;
    head = head -> next;
    delete toDelete;
}


node* reverse(node* &head)
{
    node* prevptr = NULL;
    node* currptr= head;
    node* nextptr = head -> next;

    while(currptr!=NULL)
    {
        nextptr = currptr -> next;
        currptr -> next = prevptr;


        prevptr = currptr;
        currptr = nextptr;

    }


return prevptr;


}


int main()
{
    node* head = NULL;

    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);

    display(head);


    node* newHead = reverse(head);
    display(newHead);
    
}