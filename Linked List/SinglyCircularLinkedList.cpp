#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

struct node
{
    int data;
    struct node *next;
    // struct node *prev;
    node(int value)
    {
        data = value;
        next = NULL;
        // prev=NULL;
    }
};
int listSize(struct node *head)
{
    int size = 1;
    if (head == NULL)
        return 0;
    else if (head->next == head)
        return 1;
    else
    {

        struct node *current = head->next;
        while (current != head)
        {
            size++;
            current = current->next;
        }
    }
    return size;
}
void pclist(struct node *head)
{
    struct node *current = head;

    if (head == NULL)
        cout << " List is EMPTY " << endl;

    else
    {

        cout << current->data << " ";
        for (current = current->next; current != head; current = current->next)
            cout << current->data << " ";
        // current = current->next;
        // while (current != head)
        // {
        //     cout << current->data << " ";
        //     current = current->next;
        // }
    }
    cout << endl;
}

void pclistDoWhile(struct node *head)
{
    struct node *current = head;
    if (head == NULL)
        cout << "list is empty " << endl;
    else
    {

        do
        {
            cout << current->data << " ";
            current = current->next;
        } while (current != head);
    }
    cout << endl;
}

struct node *insertAtBegin(struct node *head, int value)
{
    struct node *newnode = new node(value);
    struct node *current = head;
    if (head == NULL)
    {
        head = newnode;
        newnode->next = head;
    }
    // if (head->next == head)
    // {
    //     newnode->next = head;
    //     head->next = newnode;
    //     head = newnode;
    // }
    else
    {
        newnode->next = head;
        while (current->next != head)
        {
            current = current->next;
        }
        current->next = newnode;
        head = newnode;
    }
    return head;
}
struct node *insertAtBeginEfficient(struct node *head, int val)
{
    struct node *newnode = new node(val);

    if (head == NULL)
    {
        head = newnode;
        newnode->next = head;
    }
    else
    {
        newnode->next = head->next;
        head->next = newnode;
        swap(newnode->data, head->data);
    }
    return head;
}
struct node *insertAtEnd(struct node *head, int value)
{
    struct node *newnode = new node(value);
    struct node *current = head;
    if (head == NULL)
    {
        newnode->next = newnode;
        head = newnode;
    }
    else
    {
        newnode->next = head;
        while (current->next != head)
            current = current->next;

        current->next = newnode;
    }
    return head;
}
struct node *insertAtEndEfficient(struct node *head, int value)
{
    struct node *newnode = new node(value);
    struct node *current = head;
    if (head == NULL)
    {
        newnode->next = newnode;
        head = newnode;
    }
    else
    {
        newnode->next = head->next;
        head->next = newnode;
        swap(head->data, newnode->data);
        head = head->next;
    }
    return head;
}
struct node *deleteAtBegin(struct node *head)
{
    struct node *current = head;
    if (head == NULL || head->next == head)
    {
        delete (current);
        head = NULL;
        return head;
    }
    else
    {
        while (current->next != head)
        {
            current = current->next;
        }
        current->next = head->next;
        head = head->next;
    }
    return head;
}
struct node *deleteAtBeginEfficient(struct node *head)
{

    struct node *current = head;

    if (head == NULL || head->next == head)
    {
        delete (current);
        head = NULL;
        return head;
    }
    else
    {
        swap(head->data, head->next->data);
        head->next = head->next->next;
    }
    return head;
}

struct node *deleteAtPosition(struct node *head, int pos)
{
     int pindex=1;
    struct node *current = head;
    int size = listSize(head);
    if (pos > size || pos < 1)
    {
        cout << "INVALID SIZE" << endl;
        return head;
    }
    if (head == NULL || head->next == head)
    {
        delete (current);
        head = NULL;
        return head;
    }
    else{
         if(pos==1)
         {

           swap(head->data,head->next->data);
            struct node *temp=head->next;
           head->next=head->next->next;
           delete(temp);
         }
         else if(pos<=size){
             for(pindex;pindex<=pos-2;pindex++)
             {
                 current=current->next;
             }
             current->next=current->next->next;


         }
        //  else{
        //      while(current->next->next!=head)
        //      current=current->next;

        //      current->next=head;

        //  }
    }
    return head;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // EMPTY LINKED LIST

    struct node *head = NULL;
    // NAIVE INSERTION

    // ONLY ONE NODE

    // head = new node(7);
    // head->next=head;

    // ONLY TWO NODES

    // head = new node(10);
    // head->next = new node(20);
    // head->next->next = head;

    // ONLY THREE NODES

    head = new node(5);
    head->next = new node(10);
    head->next->next = new node(15);
    head->next->next->next = head;

    // PRINTING LINKED LIST

    cout << " circular linked list is : " << endl;
    // pclist(head);
    pclistDoWhile(head);

    //  INSERT AT BEGIN
    // head = insertAtBegin(head, 3);
    // pclist(head);
    // head = insertAtBeginEfficient(head, 1);
    // pclist(head);

    // INSERT AT END
    // head = insertAtEnd(head, 17);
    // pclist(head);
    // head = insertAtEndEfficient(head, 69);
    // pclist(head);

    // DELETE AT BEGIN
    // head=deleteAtBegin(head);
    // pclist(head);

    // head = deleteAtBeginEfficient(head);
    // pclist(head);

    // DELETE AT A POSITION 
    head=deleteAtPosition(head,3);
    pclist(head);
    return 0;
}