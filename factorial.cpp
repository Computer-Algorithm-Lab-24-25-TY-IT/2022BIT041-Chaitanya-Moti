#include <iostream>
using namespace std;
long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int number = 20; 
    cout << "Factorial of " << number << " is " << factorial(number) << endl;
    return 0;
}

