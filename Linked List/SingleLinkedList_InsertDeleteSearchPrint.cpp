#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

struct node
{
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

struct node *insertAtBegin(struct node *head, int val)
{
    node *temp = new node(val);
    temp->next = head;
    head = temp;

    return head;
}
struct node *insertAtEnd(struct node *head, int val)
{
    node *newnode = new node(val);
    node *temp = head;
    if (head == NULL)
        head = newnode;
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }

    return head;
}

void plist(node *temp)
{
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void plistR(struct node *head)
{
    if (head == NULL)
        return;

    cout << head->data << " ";
    // head=head->next;
    plistR(head->next);
}
int listSize(struct node *head)
{
    int size = 0;
    struct node *sizeptr = head;
    while (sizeptr != NULL)
    {
        size++;
        sizeptr = sizeptr->next;
    }
    return size;
}
struct node *deleteAtBegin(struct node *head)
{
    struct node *temp = head->next;
    delete (head);
    return temp;
}
struct node *deleteAtEnd(struct node *head)
{
    struct node *prev, *temp = head;

    if (head->next == NULL || head == NULL)
    {
        delete (head);
        head = NULL;
    }
    else
    {

        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
    }
    return head;
}

struct node *deleteAtPosition(struct node *head, int pos)
{

    int size = listSize(head), pindex = 1;
    struct node *current = head, *temp = current;

    if (pos < 1 || pos > size + 1)
        return head;
    if (head == NULL)
        return NULL;
    if (pos == 1)
    {
        head = head->next;
        delete (temp);
    }
    else
    {
        for (pindex = 1; pindex <= pos - 2; pindex++)
            current = current->next;

        temp = current->next;
        current->next = current->next->next;
    }

    cout<<" deleted at position : "<<pos<<endl;
    return head;
}

struct node *insertAtPosition(struct node *head, int pos, int val)
{
    struct node *newnode = new node(val);
    struct node *temp = head;
    int i = 1, size = listSize(head);

    if (pos < 0 || pos > size + 1)
    {
        // cout << " invalid size " << endl;
        return head;
    }
    if (head == NULL)
    {
        head = newnode;
        return head;
    }
    else if (pos == 1)
    {
        newnode->next = head;
        head = newnode;
    }
    else
    {
        for (i = 1; i <= pos - 2; i++)
        {
            temp = temp->next;
        }

        newnode->next = temp->next;
        temp->next = newnode;
    }
    return head;
}

int searchIterative(struct node *head, int val)
{
    struct node *current = head;
    int position = 1;
    while (current != NULL)
    {
        if (current->data == val)
            return position;

        current = current->next;
        position++;
    }
    return -1;
}

int searchRecursive(struct node *head, int val)
{
    if(head==NULL)
    return -1;
    if(head->data==val)
    return 1;
    else{
        int pos=searchRecursive(head->next,val);
        if(pos==-1)
        return -1;
        else
        return pos+1;
    }
 
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    struct node *head = NULL;

    //  PRINTING LINKED LIST
    // plist(head);
    // plistR(head);

    // INSERTION AT BEGINNING AND END

    for (int i = 1; i < 4; i++)
    {
        head = insertAtBegin(head, i * 10);
        // plist(head);
    }
    for (int i = 4; i < 10; i++)
    {
        head = insertAtEnd(head, i * 10);
        // plist(head);
    }
    //   INSERT AT A POSITION

    head = insertAtPosition(head, 10, 3);
    // plist(head);
    head = insertAtPosition(head, 15, 5);
    // plist(head);
    head = insertAtPosition(head, 1, 7);
    // plist(head);
    head = insertAtPosition(head, 7, 67);
    // plist(head);
    head = insertAtPosition(head, 4, 756);
    // plist(head);

    // cout << "Linked list is Recursive : " << endl;
    // plistR(head);
    // cout<<endl;

    // DELETION AT BEGINNING AND END

    // for (int i = 1; i < 4; i++)
    // {
    //     head = deleteAtBegin(head);
    //     plist(head);
    // }
    // for (int i = 4; i < 7; i++)
    // {
    //     head = deleteAtEnd(head);
    //     plist(head);
    // }

    // DELETE AT POSITION
     cout<<" linked list is ITERATIVE : "<<endl;
     plist(head);
     cout<<endl;
  head=deleteAtPosition(head,0);
     plist(head);
     head=deleteAtPosition(head,-4);
     plist(head);
     head=deleteAtPosition(head,1);
     plist(head);
     head=deleteAtPosition(head,6);
     plist(head);
     head=deleteAtPosition(head,11);
     plist(head);
     head=deleteAtPosition(head,111);
     plist(head);
     head=deleteAtPosition(head,3);
     plist(head);
    // SEARCHING IN A SINGLY LINKED LIST

    // cout << " iterative solution : " << endl;
    int valueToFind = 67;
    int position = searchIterative(head, valueToFind);
    if (position == -1)
        cout << " value " << valueToFind << "   is not present" << endl;
    else
        cout << " position is : " << position << endl;

    cout << " recursive solution : " << endl;

    valueToFind = 67;
    position = searchRecursive(head, valueToFind);
    if (position == -1)
        cout << " value " << valueToFind << "   is not present" << endl;
    else
        cout << " position is : " << position << endl;


    return 0;
}