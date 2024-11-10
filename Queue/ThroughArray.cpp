#include<iostream>
using namespace std;

//Simple Queue
// class Queue {
//     int *arr;
//     int front;  
//     int rear;
//     int size;

// public:
//     // Constructor
//     Queue() {
//         size = 1000;
//         arr = new int[size];  // Fixed size
//         front = 0;
//         rear = 0;
//     }

//     void enque(int data) {
//         if (rear == size) {
//             cout << "Queue is Full" << endl;
//         } else {
//             arr[rear] = data;
//             rear++;
//         }
//     }

//     int deque() {
//         if (front == rear) {
//             return -1;
//         } 
//         else {
//             int ans = arr[front];
//             arr[front] = -1;
//             front++;
//             if (front == rear) {
//                 front = 0;
//                 rear = 0;
//             }
//             return ans;
//         }
//     }

//     int getFront() {  
//         if (front == rear) {
//             return -1;
//         } else {
//             return arr[front];
//         }
//     }

//     bool isEmpty() {
//         return (front == rear);
//     }
// };


//Circular Queue
// class CircularQueue{
//     int *arr;
//     int front;
//     int rear;
//     int size;
 

//  public:
//  CircularQueue(int n){
//     size=n;
//     arr=new int[size]; //memory allocation
//     front=rear=-1;
//  }


// bool enqueue(int val){
// if((front==0 && rear==size-1)||(rear==(front-1)%(size-1))){  //to chech whether queue is full
//     cout<<"Queue is Full!"<<endl;
//     return false;
// }

// else if(front==-1){  //first element to push
//     front=rear=0;
// }

// else if(rear==size-1 && front !=0){  //to maintain cyclic nature
// rear=0;
// }

// else{  //normal flow
//     rear++;
// }
//     arr[rear]=val;  //push inside the queue
//     return true;
//  }

//  int deque(){
//     if(front==-1){   //to check queue is empty..
//         cout<<"Queue is Empty.."<<endl;
//         return -1;
//     }
//     int ans=arr[front];
//     arr[front]=-1;
//     if(front==rear){   //single element is Present
//         front=rear=-1;
//     }
//     else if(front==size-1){  //To maintain Cyclic nature
//         front=0;
//     }
//     else{  //normal flow
//         front++;
//     }
//     return ans;
//  }

// };


//Doubly ended Queue
 class Deque{
int *arr;
int front;
int rear;
int size;
 
public: 
Deque(int n){
size=n;
arr=new int[n];
front=-1;
rear=-1;
}

bool push_Front(int x){
    //check full or not
    if((front==0 && rear==size-1) || (rear==(front-1)%(size-1))){
        return false;
    }
    else if(front==-1){  //To insert First element
    front=rear=0;
    }
    else if(front==0 && rear !=size-1){  //for Cyclic nature
     front=size-1;
    }
    else{  //normal flow
    front--;
    }
    arr[front]=x;
    return true;
}

bool push_Rear(int x){
   //check full or not
    if((front==0 && rear==size-1) || (rear==(front-1)%(size-1))){
        return false;
    }
    else if(front==-1){  //To insert First element from back
    front=rear=0;
    }
    else if(rear==size-1 && front !=0){  //To maintain a cyclic nature
     rear=0;
    }
    else{  //normal flow
        rear++;
    }
    arr[rear]=x;
    return true;
}

int pop_Front(){
    if(front==-1){   //to check queue is empty..
        cout<<"Queue is Empty.."<<endl;
        return -1;
    }
    int ans=arr[front];
    arr[front]=-1;
    if(front==rear){   //single element is Present
        front=rear=-1;
    }
    else if(front==size-1){  //To maintain Cyclic nature
        front=0;
    }
    else{  //normal flow
        front++;
    }
    return ans;
}

int pop_Rear(){
    if(front==-1){   //to check queue is empty..
        cout<<"Queue is Empty.."<<endl;
        return -1;
    }
    int ans=arr[rear];
    arr[rear]=-1;
    if(front==rear){   //single element is Present
        front=rear=-1;
    }
    else if(rear==0){  //To maintain Cyclic nature
        rear=size-1;
    }
    else{  //normal flow
        rear--;
    }
    return ans;
}

int getFront(){
    if(isEmpty()){
        return -1;
    }
    else{
        return arr[front];
    }
}

int getRear(){
    if(isEmpty()){
        return -1;
    }
    return arr[rear];
}

bool isEmpty(){
    if(front==-1){
        return true;
    }
    else{
        return false;
    }
}

bool isFull(){
if((front==0 && rear==size-1) || (rear==(front-1)%(size-1))){
return true;
}
else{
    return false;
}
}

 };
 
int main() {
    // Queue q; 
    // q.enque(10);
    // q.enque(20);
    // q.deque();
    // cout << "Front element is: " << q.getFront() << endl;
    // cout<<q.isEmpty()<<endl;


//  CircularQueue cq(5);
//  cq.enqueue(10);
//  cq.enqueue(100);
//  cq.enqueue(1000);
//  cq.enqueue(10000);
//  cout<<cq.deque()<<endl;
  
//Doubly Ended Queue
Deque den(12);  
den.push_Front(10);
den.push_Rear(20);

cout<<den.getFront()<<endl;
cout<<den.getRear()<<endl;







    return 0;
}
