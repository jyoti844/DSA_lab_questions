#include<iostream>
using namespace std;
void calculate_address(int base_address, int index, int element_size){
  int address = base_address + (index * element_size);
  cout<<"Calculated Address: "<<address<<endl;
}
int main(){
    int base_address, index, element_size;
    cout<<"Enter base address: ";
    cin>>base_address;
    cout<<"Enter index: ";
    cin>>index;
    cout<<"Enter element size: ";
    cin>>element_size;
    calculate_address(base_address, index, element_size);
    return 0;
}