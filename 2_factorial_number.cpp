#include<iostream>
using namespace std;
int factorial(int n){
  //if given number is negative 
  if(n<0){
    cout<<"Factorial is not defined for negative numbers."<<endl;
    return -1;
  }
  //if given number is 0 or 1
  else if(n==0 || n==1){
    cout<<"Factorial: 1"<<endl;
    return 1;
  }
  //if given number is positive number greater than 1
  else{
    int fact=1;
    for(int i=1;i<=n;i++){
      fact*=i;
    }
    cout<<"Factorial: "<<fact<<endl;
    return fact;
  }
}
int main(){
  int n;
  cout<<"Enter a positive integer: ";
  cin>>n;
  factorial(n);
  return 0;
}