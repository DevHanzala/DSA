#include <iostream>
using namespace std;

class Node
{
public:
    int data;   
    Node *next; 

    // Constructor to initialize a new node
    Node(int data)
    {
        this->data = data; 
        this->next = NULL; 
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

// Insert at the start of the list
void insertAtHead(Node *&head, Node *&tail, int d)
{
    Node *temp = new Node(d); // Create a new node
    if (head == NULL)
    {
        // If the list is empty, both head and tail point to the new node
        head = temp;
        tail = temp;
    }
    else
    {
        // Otherwise, insert the new node at the head
        temp->next = head;
        head = temp;
    }
}

// Insert at the end of the list
void insertAtTail(Node *&tail, Node *&head, int d)
{
    Node *temp = new Node(d); // Create a new node
    if (tail == NULL)
    {
        // If the list is empty, both head and tail point to the new node
        tail = temp;
        head = temp;
    }
    else
    {
        // Otherwise, insert the new node at the tail
        tail->next = temp;
        tail = temp;
    }
}

// Insert at a given position
void insertAtPosition(Node *&tail, Node *&head, int pos, int d)
{
    if (pos == 1)
    {
        // If inserting at the start
        insertAtHead(head, tail, d);
        return;
    }

    Node *temp = head;
    int count = 1;
    while (count < pos - 1 && temp != NULL)
    {
        temp = temp->next;
        count++;
    }

    // Inserting at the end
    if (temp == NULL || temp->next == NULL)
    {
        insertAtTail(tail, head, d);
    }
    else
    {
        Node *nodeToInsert = new Node(d);
        nodeToInsert->next = temp->next;
        temp->next = nodeToInsert;
    }
}

// Delete a node at a given position
void deleteNode(int position, Node *&head, Node *&tail)
{
    if (position == 1)
    {
        // Deleting the first node
        Node *temp = head;
        head = head->next;

        // If we deleted the only node, update the tail as well
        if (head == NULL)
        {
            tail = NULL;
        }

        temp->next = NULL;
        delete temp;
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

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

// Traverse and print the list
void print(Node *head)
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

int main()
{
    // Node *node1 = new Node(10);
    // Node *head = node1;
    // Node *tail = node1;

    Node *head = NULL;
    Node *tail = NULL;

    // Insert nodes at various positions
    insertAtHead(head, tail, 5);
    print(head); // Output: 5

    insertAtHead(head, tail, 3);
    print(head); // Output: 3 5

    insertAtTail(tail, head, 10);
    print(head); // Output: 3 5 10

    insertAtPosition(tail, head, 2, 7);
    print(head); // Output: 3 7 5 10

    deleteNode(1, head, tail);
    print(head); // Output: 7 5 10

    deleteNode(2, head, tail);
    print(head); // Output: 7 10

    return 0;
}
