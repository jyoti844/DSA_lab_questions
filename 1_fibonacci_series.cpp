#include<iostream>
using namespace std;
void fibonacci_series(int n,int a=0,int b=1){
    if(n==0) return;
    cout<<a<<" ";
    fibonacci_series(n-1,b,a+b);
}
int main(){
    int n;
    cout<<"Enter the number of terms in Fibonacci series: ";
    cin>>n;
    cout<<"Fibonacci Series: ";
    fibonacci_series(n);
    cout<<endl;
    return 0;
}
  