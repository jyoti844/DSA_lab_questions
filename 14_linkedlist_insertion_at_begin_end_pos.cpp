#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
class linkedlist{
    public:
    node* head;
    linkedlist(){
        head=NULL;
    }
    void insertAtBeginning(int x){
        node* newNode=new node(x);
        newNode->next=head;
        head=newNode;
    }
    void insertAtEnd(int x){
        node* newNode=new node(x);
        if(head==NULL){
            head=newNode;
            return;
        }
        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }
    void insertAtPosition(int x, int pos){
        if(pos==0){
            insertAtBeginning(x);
            return;
        }
        node* newNode=new node(x);
        node* temp=head;
        for(int i=0;i<pos-1;i++){
            if(temp==NULL){
                cout<<"Position out of bounds"<<endl;
                return;
            }
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
    void display(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    linkedlist ll;
    ll.insertAtBeginning(10);
    ll.insertAtEnd(20);
    ll.insertAtPosition(15, 1);
    ll.display(); // Output: 10 15 20
    return 0;
}