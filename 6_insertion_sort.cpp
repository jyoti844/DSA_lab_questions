#include<iostream>
using namespace std;
void insertion_sort(int arr[], int n){
  for(int i=1; i<n; i++){
    int key=arr[i];
    int j=i-1;
    // Move elements of arr[0..i-1], that are greater than key,
    // to one position ahead of their current position
    while(j>=0 && arr[j]>key){
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=key;
  }
}
void display(int arr[], int n){
  cout<<"Sorted array: ";
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
int main(){
  int arr[100],n;
  cout<<"Enter the number of elements: ";
  cin>>n;
  cout<<"Enter "<<n<<" elements:"<<endl;
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  // Insertion Sort Algorithm
  insertion_sort(arr,n);
  // Displaying sorted array
  display(arr,n);  
  return 0;
}