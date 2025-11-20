#include<iostream>
using namespace std;
class queue{
    public:
    int front,rear,size;
    int *arr;
    queue(int s){
        size=s;
        arr=new int[size];
        front=0;
        rear=-1;
    }
    void enqueue(int x){
        if(rear==size-1){
            cout<<"Queue Overflow"<<endl;
            return;
        }
        rear++;
        arr[rear]=x;
    }
    void dequeue(){
        if(front>rear){
            cout<<"Queue Underflow"<<endl;
            return;
        }
        front++;
    }
    int getFront(){
        if(front>rear){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[front];
    }
    bool isEmpty(){
        return front>rear;
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