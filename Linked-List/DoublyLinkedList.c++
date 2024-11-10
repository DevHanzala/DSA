#include <iostream>
using namespace std;
class Node
{

public:
    int data;
    Node *next;
    Node *prev;

    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node(){
        int val=this->data;
        if(next !=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory free for node with data "<<val<<endl;
    }
};

// Insert at the start
void insertAtHead(Node* &tail,Node *&head, int d)
{

    // empty list
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail=temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

// Inser at the end
void insertAtTail(Node *&tail,Node* &head, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail=temp;
        head=temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

// Traversing
void printNode(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// insert at the position you want
void insertAtposition(Node *&tail, Node *&head, int pos, int d)
{
    // insert at start
    if (pos == 1)
    {
        insertAtHead(tail,head, d);
        return;
    }

    Node *temp = head;
    int count = 1;
    while (count < pos - 1 && temp != NULL)
    {
        temp = temp->next;
        count++;
    }

    // inserting at end
    if (temp->next == NULL)
    {
        insertAtTail(tail,head, d);
        return;
    }
    // creating a node for d
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(int position, Node *&head, Node *&tail)
{
    if (position == 1)
    {
        // Deleting the first node
        Node *temp = head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
        // If we deleted the only node, update the tail as well
        if (head == NULL)
        {
            tail = NULL;
        }
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int count = 1;

        while (count < position && curr != NULL)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }

        if (curr == NULL)
        {
            return; // If the position is out of bounds
        }

        // If deleting the last node, update the tail
        if (curr->next == NULL)
        {
            tail = prev;
        }
        if(curr->next !=NULL){
            curr->next->prev=prev;
        }

        curr->prev = NULL;
        prev->next=curr->next ;
        curr->next=NULL;
        delete curr;
    }
}

void print(Node *&head)
{
    Node *temp = head; // Start from the head of the list

    // Traverse the list and print the data of each node
    while (temp != NULL)
    {
        cout << temp->data << " "; // Print current node's data
        temp = temp->next;         // Move to the next node
    }
    cout << endl;
}

// gives length
int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

int main()
{
    cout << "Doubly Linked List" << endl;
    // Node *node1 = new Node(10);
    // Node *head = node1;
    // Node *tail = node1;

    Node *head = NULL;
    Node *tail = NULL;
    insertAtHead(tail,head, 5);
    insertAtTail(tail,head, 15);
    insertAtposition(tail, head, 3, 20);
    insertAtposition(tail, head, 4, 40);
    deleteNode(3,head,tail);
    printNode(head);
    cout << "The length of LinkedList is: " << getLength(head) << endl;
    cout<<"Head -> "<<head->data<<endl;
    cout<<"Tail -> "<<tail->data<<endl;
}