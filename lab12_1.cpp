#include<iostream>
using namespace std;

long long fibonacci(int n);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

long long fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}