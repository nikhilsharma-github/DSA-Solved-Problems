#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl
struct node
{
    int data;
    struct node *prev;
    struct node *next;
    node(int value)
    {
        data = value;
        prev = NULL;
        next = NULL;
    }
};
void pdlist(struct node *head)
{
    struct node *current = head;
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

struct node *insertAtBegin(struct node *head, int value)
{
    struct node *newnode = new node(value);
    if (head == NULL)
        head = newnode;
    else
    {
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }

    return head;
}

struct node *insertAtEnd(struct node *head, int val)
{
    struct node *newnode = new node(val);
    struct node *current = head;
    if (head == NULL)
    {
        head = newnode;
        return head;
    }
    else
    {

        while (current->next != NULL)
        {
            current = current->next;
        }
    }

    current->next = newnode;
    newnode->prev = current;

    return head;
}
struct node *reverseDoublyLinkedListE(struct node *head)
{
    struct node *back = NULL;
    struct node *current = head;
    while (current != NULL)
    {
        back = current->prev;
        current->prev = current->next;
        current->next = back;
        current = current->prev;
    }
    if (back != NULL)
        head = back->prev;

    return head;
}
struct node *reverseDoublyLinkedList(struct node *head)
{
    struct node *back = NULL;
    struct node *current = head;

    if (head == NULL || head->next == NULL)
    {
        cout << " only one node or empty so returend true : " << endl;
        return head;
    }
    else
    {
        while (current != NULL)
        {
            back = current->prev;
            current->prev = current->next;
            current->next = back;
            current = current->prev;
        }
        head = back->prev;
        return head;
    }
}
struct node *deleteAtBegin(struct node *head)
{

    struct node *temp = head;
    if (head == NULL || head->next == NULL)
    {
        delete (temp);
        head = NULL;
        return head;
    }
    else
    {
        temp = head;
        head = head->next;
        head->prev = NULL;
        delete (temp);
    }
    return head;
}

struct node * deleteAtEnd(struct node *head){
    struct node *current=head,*temp;
    if(head==NULL||head->next==NULL){
        temp=head;
        delete(temp);
        head=NULL;
        return head;
    }
    else{
        while(current->next->next!=NULL){
            current=current->next;
        }
        temp=current->next;
        delete(temp);
        current->next=NULL;


    }

    return head;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    struct node *head = NULL;
    struct node *newnode = new node(10);
    head = newnode;
    newnode = new node(20);
    head->next = newnode;
    newnode->prev = head;
    newnode = new node(30);
    head->next->next = newnode;
    newnode->prev = head->next;

    head = insertAtBegin(head, 5);
    head = insertAtBegin(head, 15);
    head = insertAtBegin(head, 25);
    head = insertAtEnd(head, 75);
    cout << "doubly linked list is : " << endl;
    pdlist(head);
    head = reverseDoublyLinkedList(head);
    cout << "doubly linked list S is : " << endl;
    pdlist(head);
    // // head = reverseDoublyLinkedListE(head);
    // // cout << "doubly linked list E is : " << endl;
    // // pdlist(head);
    // cout<<" delete at beginning"<<endl;

//   for(int i=1;i<=6;i++)
//   {
//     head = deleteAtEnd(head);
//     pdlist(head);
//   }
    return 0;
}