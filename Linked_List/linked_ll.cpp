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

// INSERT AT HEAD

void insertAtHead(node* &head,int val)
{
    node* n = new node(val);
    n -> next = head;
    head = n;

}

// Print Linked_List
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

// Searching no in linked_List


bool search_key(node* head, int key)
{
    node* temp = head;
    while(temp!=NULL)
    {
        if(temp -> data == key)
        {
            return true;
        }
        temp = temp -> next;
    }

    return false;
}

// DELETION in Linked_list
void deleteAtHead(node* &head)
{
    node* toDelete = head;
    head = head -> next;
    delete toDelete;
}

void deletion(node* &head, int val)
{
    if(head == NULL)
    {
        return;
    }

    if(head -> next == NULL)
    {
        deleteAtHead(head);
        return;
    }

    node*temp = head;

    while (temp -> next -> data != val)
    {
        temp = temp -> next;
    }
    node* toDelete = temp -> next;
    temp -> next = temp -> next ->next;

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

    display(head);

    insertAtHead(head,4);
    display(head);

    cout << search_key(head,5) << endl;
     cout << search_key(head,4) << endl;

    deletion(head,4);
    display(head);

    node* newHead = reverse(head);
    display(newHead);
    
}