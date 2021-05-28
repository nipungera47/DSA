#include<iostream>
using namespace std;

// We will use hare and tortoise concept
// if there is no cycle check for fast if fast == Null or fast -> next

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

void makeCycle(node* &head ,int pos)
{
    int count =1;
    node* temp = head;
    node* start_node;
    while(temp -> next != NULL)
    {
        if(count == pos)
        {
            start_node =temp;

        }
        temp = temp-> next;
        count++;
    }

    temp -> next = start_node;

}






bool detect_cycle(node* &head)
{
    node* slow = head;
    node* fast = head;

    while(fast != NULL && fast -> next != NULL)
    {
        slow = slow -> next;
        fast = fast -> next -> next;

        if(fast == slow)
        {
            return true;
        }
    }

    return false;
}

void remove_cycle(node* head)
{
    node*slow = head;
    node*fast = head;

    do{
        slow = slow -> next;
        fast = fast -> next -> next;
    }while(slow != fast);

     fast= head;

     while(slow -> next != fast -> next)
     {
         slow = slow -> next;
         fast = fast -> next;
     }

     slow -> next = NULL;

}



int main()
{
      node* head = NULL;

    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,7);
    insertAtTail(head,8);
    makeCycle(head,3);
    // display(head);
    cout << detect_cycle(head) << endl;

    remove_cycle(head);

    cout << detect_cycle(head) << endl;
}



