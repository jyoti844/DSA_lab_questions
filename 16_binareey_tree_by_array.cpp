#include<iostream>
using namespace std;
class ArrayBT{
  public:
    int arr[100];
  int size;//elemengts in the array
  ArrayBT(){
    size=0;
  }
  void insert(int val){
    if(size>=100){
      cout<<"Binary Tree is full"<<endl;
      return;
    }
    arr[size]=val;
    size++;
  }
  void display(){
    for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
};
int main(){
  ArrayBT tree;
  tree.insert(10);
  tree.insert(20);
  tree.insert(30);
  tree.display(); // Output: 10 20 30
  return 0;
}