#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor to create a new node
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class Queue {
    Node* front;
    Node* rear;

public:
    // Constructor to initialize an empty queue
    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    // Enqueue function to add an element at the end of the queue
    void enque(int data) {
        Node* newNode = new Node(data);

        if (rear == nullptr) {  // If the queue is empty
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << "Enqueued: " << data << endl;
    }

    // Dequeue function to remove an element from the front of the queue
    int deque() {
        if (front == nullptr) {  // If the queue is empty
            cout << "Queue is empty, cannot dequeue" << endl;
            return -1;
        }

        int result = front->data;
        Node* temp = front;
        front = front->next;

        if (front == nullptr) {  // If the queue is now empty
            rear = nullptr;
        }

        delete temp;
        return result;
    }

    // Get the front element without removing it
    int getFront() {
        if (front == nullptr) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return front->data;
    }

    // Check if the queue is empty
    bool isEmpty() {
        return front == nullptr;
    }
};

int main() {
    Queue q;

    // Enqueue elements
    q.enque(10);
    q.enque(20);
    q.enque(30);

    // Display the front element
    cout << "Front element: " << q.getFront() << endl;

    // Dequeue elements
    cout << "Dequeued: " << q.deque() << endl;
    cout << "Dequeued: " << q.deque() << endl;

    // Check if the queue is empty
    if (q.isEmpty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }

    // Dequeue the last element
    cout << "Dequeued: " << q.deque() << endl;

    // Attempt to dequeue from an empty queue
    int result = q.deque();
    if (result == -1) {
        cout << "Queue is empty, cannot dequeue" << endl;
    }

    return 0;
}
