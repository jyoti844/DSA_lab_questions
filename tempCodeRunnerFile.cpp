#include<iostream>
using namespace std;
int fibonnaci(int n1,int n2,int n){
  if(n<=0){
    return 0;
  }
  else{
    cout<<n1<<" ";
   int  n3=n1+n2;
    n1=n2;
    n2=n3;
    fibonnaci(n1,n2,n-1);
  }
}
int main(){
  int n1=0,n2=1,n3,n;
  cout<<"Enter the number of terms: ";
  cin>>n;
  cout<<"Fibonacci Series: ";
  fibonnaci(n1, n2, n);

}