#include<iostream>
#include<stack>
using namespace std;

class queue{
    public:
    stack<int> s1, s2;

    void enqueue(int x){
        s1.push(x);
    }

    void dequeue(){
        if(s2.empty()){
            if(s1.empty()){
                cout<<"Queue Underflow"<<endl;
                return;
            }
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        s2.pop();
    }

    int getFront(){
        if(s2.empty()){
            if(s1.empty()){
                cout<<"Queue is empty"<<endl;
                return -1;
            }
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }

    bool isEmpty(){
        return s1.empty() && s2.empty();
    }
};
int main(){
  queue q;
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