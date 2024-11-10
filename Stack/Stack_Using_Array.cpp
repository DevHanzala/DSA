#include <iostream>
using namespace std;

class Stack {
    // Properties
    int *arr;
    int top;
    int size;

public:
    // Constructor to initialize the stack with a given size
    Stack(int size) {
        this->size = size;
        arr = new int[size];  // Allocate memory for the stack
        top = -1;             // Initialize top to -1, indicating an empty stack
    }

    // Push operation to add an element to the stack
    void push(int element) {
        if (size - top > 1) { // Check if there’s space to add an element
            top++;            // Move the top pointer up
            arr[top] = element; // Place the element at the new top position
            cout << "Pushed: " << element << endl; // Print the pushed element
        } else {
            cout << "Stack overflow" << endl; // Print if stack is full
        }
    }

    // Pop operation to remove the top element from the stack
    void pop() {
        if (top >= 0) {       // Check if the stack is not empty
            cout << "Popped: " << arr[top] << endl; // Print the popped element
            top--;            // Move the top pointer down, effectively removing the element
        } else {
            cout << "Stack underflow" << endl; // Print if stack is empty
        }
    }

    // Peek operation to see the top element without removing it
    int peek() {
        if (top >= 0) {       // Check if the stack is not empty
            return arr[top];  // Return the top element
        } else {
            cout << "Stack is empty" << endl;
            return -1;        // Return -1 if stack is empty
        }
    }

    // Check if the stack is empty
    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    Stack st(5);

    cout << "Pushing elements onto the stack:" << endl;
    st.push(1); 
    st.push(2); 
    st.push(3); 
    st.push(4); 
    st.push(5); 

    st.push(6);


    cout << "\nPopping the top element:" << endl;
    st.pop();   // Removes the top element (5 in this case) and prints it
    cout << "Current top element after pop: " << st.peek() << endl; // Should print 4

    // Check if the stack is empty
    if (st.isEmpty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }

    return 0;
}



// if you want to test the STL stack instead of the custom Stack class
    //creation of stack
    // stack<int> s;

    // add element
    // s.push(1);
    // s.push(2);
    // s.push(3);
    // s.push(4);

    // //remove element
    // s.pop();  //remove 4
    // s.pop();  //remove 3

    // cout << "Printing top of element " << s.top() << endl;
    // if (s.empty()) {
    //     cout << "Stack is empty " << endl;
    // } else {
    //     cout << "Stack is not empty " << endl;
    //     cout << "Size of stack => " << s.size() << endl;
    // }
