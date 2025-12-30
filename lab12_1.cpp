#include<iostream>
#include<ctime>
using namespace std;

long long nums[50] = {0};
long long fibonacci(int n);

int main(){
    clock_t start = clock();
    cout << "Result: " << fibonacci(50) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.";
    return 0;
}

long long fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (!nums[n]) nums[n] = fibonacci(n-1) + fibonacci(n-2);
    return nums[n];
}