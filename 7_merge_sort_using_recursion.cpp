#include<iostream>
using namespace std;
void merge_sort(int arr[], int left, int right){
  
  }

int main(){
  int arr[100],n;
  cout<<"Enter the number of elements: ";
  cin>>n; 
  cout<<"Enter "<<n<<" elements:"<<endl;
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  // Merge Sort Using Recursion
  merge_sort(arr, 0, n-1);
  // Displaying sorted array
  display(arr, n);
  return 0;
}