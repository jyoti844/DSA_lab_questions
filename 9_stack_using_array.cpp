#include<iostream>
using namespace std;
class stack{
    public:
    int top;
    int size;
    int *arr;
    stack(int s){
        size=s;
        arr=new int[size];
        top=-1;
    }
    void push(int x){
        if(top==size-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }
    void pop(){
        if(top==-1){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        top--;
    }
    int peek(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool isEmpty(){
        return top==-1;
    }
};



int main(){
  stack st(5);
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