#include<iostream>
using namespace std;
void insertion(int arr[], int &n, int element, int position){
  if(position<0 || position>n){
    cout<<"Invalid position for insertion."<<endl;
    return;
  }
  for(int i=n; i>position; i--){
    arr[i]=arr[i-1];
  }
  arr[position]=element;
  n++;
}
void deletion(int arr[], int &n, int position){
  if(position<0 || position>=n){
    cout<<"Invalid position for deletion."<<endl;
    return;
  }
  for(int i=position; i<n-1; i++){
    arr[i]=arr[i+1];
  }
  n--;
}
void display(int arr[], int n){
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
int main(){
  int arr[100]={1,2,3,4,5};
  int inserted_element=10;
  int position=2; //position to insert the element (0-based index)
  int n=5; //current size of the array
  // Insertion
  insertion(arr, n, inserted_element, position);
  cout<<"Array after insertion: ";
  display(arr, n);
  // Deletion
  int delete_position=3; //position to delete the element (0-based index)
  deletion(arr, n, delete_position);
  cout<<"Array after deletion: ";
  display(arr, n);
}