#include<iostream>
using namespace std;
class node{
  public:
  int data;
  node*rear,*front;
  node(int val){
    data=val;
    rear=NULL;
    front=NULL;
  }
};
class queue{
  public:
  node*front;
  node*rear;
  queue(int s){
    front=NULL;
    rear=NULL;
  }
  void enqueue(int x){
    node*newNode=new node(x);
    if(rear==NULL){
      front=newNode;
      rear=newNode;
      return;
    }
    rear->rear=newNode;
    rear=newNode;
  }
  void dequeue(){
    if(front==NULL){
      cout<<"Queue Underflow"<<endl;
      return;
    }
    node*temp=front;
    front=front->rear;
    if(front==NULL){
      rear=NULL;
    }
    delete temp;
  }
  int getFront(){
    if(front==NULL){
      cout<<"Queue is empty"<<endl;
      return -1;
    }
    return front->data;
  }
  bool isEmpty(){
    return front==NULL;
  }
};

int main(){
  queue q(5);
  q.enqueue(10);
  q.enqueue(20);
  cout<<q.getFront()<<endl; // Output: 10
  q.dequeue();
  cout<<q.getFront()<<endl; // Output: 20
  q.dequeue();
  cout<<q.isEmpty()<<endl; // Output: 1 (true)
  q.dequeue(); // Output: Queue Underflow
  return 0;
  
}