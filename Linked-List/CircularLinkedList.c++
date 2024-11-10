#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // constructor
    Node(int d){
        this->data=d;
        this->next=NULL;
    }

    //destructor
    ~Node(){
        int val=this->data;
        if(this->next !=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory is free for node with data "<<val<<endl;
    }
};

void insertNode(Node* &tail,int element, int d){
    //assuming that the eleement is present in the list

    //empty list
    if(tail==NULL){
   Node* newNode=new Node(d);
   tail=newNode;
   newNode->next=newNode;
    }
    else{
  //non empty list
  //assuming that the element is present in the list

  Node* curr=tail;
  while(curr->data !=element){
    curr=curr->next;
  }
   
 //element  found -->curr is representing element's node
 Node* temp=new Node(d);
 temp->next=curr->next;
 curr->next=temp;  

    } 
}

void print(Node* tail){
    Node* temp=tail;
    do{
   cout<<tail->data<<" ";
   tail=tail->next;
    }while(tail !=temp);
    cout<<endl;
}

void deleteNode(Node* &tail,int val){

//empty list
if(tail==NULL){
    cout<<"List is empty please check again"<<endl;
    return;
}
else{
    //non empty
    //assuming that "value" is present in the linked list
    Node* prev=tail;
    Node* curr=prev->next;

    while(curr->data !=val){
        prev=curr;
        curr=curr->next;
    }

    prev->next=curr->next;

    //1 Node linked list deletion
    if(curr==prev){
        tail=NULL;
    }
    //for 2 node linked list deletion
    else if(tail==curr){
        tail=prev;
    }    
    curr->next=NULL;
    delete curr;
}
}

int main(){
    Node* tail=NULL;
    insertNode(tail,5,3);
    insertNode(tail,3,4);  //means just after that where my 3 is present 
    insertNode(tail,4,5);
    insertNode(tail,3,6);
    print(tail); 

    deleteNode(tail,5);
    deleteNode(tail,3);
    print(tail);

}