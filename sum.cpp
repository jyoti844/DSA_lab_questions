#include<iostream>
using namespace std;
int sum(int n, int current_sum=0) {
    if (n <= 0) {
        return current_sum;
    } else {
        current_sum += n;
        return sum(n - 1, current_sum);
    }
}