#include <iostream>
using namespace std;

int findGCD(int a, int b) {
    if (b == 0)
        return a;
    return findGCD(b, a % b);
}
int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "The GCD of " << num1 << " and " << num2 << " is: " << findGCD(num1, num2) << endl;
    return 0;
}
