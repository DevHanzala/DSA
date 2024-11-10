#include <iostream>
using namespace std;

// Node class representing each element in the stack
class Node {
public:
    int value;     // Value of the node
    Node* next;    // Pointer to the next node
};

// Stack class using linked list
class Stack {
private:
    Node* top;    // Pointer to the top of the stack

public:
    // Constructor to initialize the stack
    Stack(){
        top=NULL;
    }

    // Push operation to add an element to the top of the stack
    void push(int value) {
        Node* newNode = new Node();  // Create a new node with the given value
        newNode->value = value;  // Link the new node to the current top node
        newNode->next=top;
        top = newNode;        // Update the top to be the new node
        cout << "Pushed " << value << " onto the stack.\n";
    }

    // Pop operation to remove the top element from the stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty. Nothing to pop.\n";
            return;
        }
        int poppedValue = top->value;  // Get the value of the top element
        Node* temp = top;  // Temporary pointer to the current top
        top = temp->next;   // Move the top pointer to the next node
        temp->next=NULL;
        delete temp;       // Delete the old top node
        cout << "Popped " << poppedValue << " from the stack.\n";
    }

    // Peek operation to view the top element without removing it
    int peek(){
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return -1;  // Return an invalid value as an indicator
        }
        cout<<"Top Element is: "<<top->value<<endl;
        return top->value;  // Return the value of the top element
    }

    // Check if the stack is empty
    bool isEmpty(){
        if(top==NULL){
            cout<<"Stack is Empty"<<endl;
            return 1;
        }
        cout<<"Stack is not null"<<endl;
        return 0;
    }

};

// Example usage
int main() {
    
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Top element is: " << stack.peek() << endl;  // Should print 30

    stack.pop();
    cout << "Top element after pop is: " << stack.peek() << endl;  // Should print 20

    stack.pop();
    stack.pop();
    stack.pop();  // Trying to pop from an empty stack

    return 0;
}
