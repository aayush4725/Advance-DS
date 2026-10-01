#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 10;
    
    cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << "\n\n";
    
    cout << "Fibonacci Series up to " << n << " terms:\n";
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << "\n";

    return 0;
}
