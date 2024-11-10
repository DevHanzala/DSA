#include<iostream>
using namespace std;

class Queue {
    int *arr;
    int front;  
    int rear;
    int size;

public:
    // Constructor
    Queue() {
        size = 1000;
        arr = new int[size];  // Fixed size
        front = 0;
        rear = 0;
    }

    void enque(int data) {
        if (rear == size) {
            cout << "Queue is Full" << endl;
        } else {
            arr[rear] = data;
            rear++;
        }
    }

    int deque() {
        if (front == rear) {
            return -1;
        } 
        else {
            int ans = arr[front];
            arr[front] = -1;
            front++;
            if (front == rear) {
                front = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int getFront() {  
        if (front == rear) {
            return -1;
        } else {
            return arr[front];
        }
    }

    bool isEmpty() {
        return (front == rear);
    }
};


int main() {
    Queue q;

    cout << "Enqueuing elements:" << endl;
    q.enque(10);
    cout << "Enqueued: 10" << endl;
    q.enque(20);
    cout << "Enqueued: 20" << endl;
    q.enque(30);
    cout << "Enqueued: 30" << endl;

    cout << "Front element: " << q.getFront() << endl;

    cout << "Dequeuing elements:" << endl;
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
