#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class stack{
    public:
    Node* top;
    stack(){
        top=NULL;
    }
    void push(int x){
        Node* newNode=new Node(x);
        newNode->next=top;
        top=newNode;
    }
    void pop(){
        if(top==NULL){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        Node* temp=top;
        top=top->next;
        delete temp;
    }
    int peek(){
        if(top==NULL){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return top->data;
    }
    bool isEmpty(){
        return top==NULL;
    }
};

int main(){
  stack st;
  st.push(10);
  st.push(20);
  cout<<st.peek()<<endl; // Output: 20
  st.pop(); 
  cout<<st.peek()<<endl; // Output: 10
  st.pop();
  cout<<st.isEmpty()<<endl; // Output: 1 (true)
  st.pop(); // Output: Stack Underflow
  return 0;
}