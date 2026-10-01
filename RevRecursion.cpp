#include <iostream>
#include <cmath>

void reverseNumberRecursive(int num, int &reversedNum) {
    if (num == 0) {
        return;
    }
    reversedNum = (reversedNum * 10) + (num % 10);
    reverseNumberRecursive(num / 10, reversedNum);
}

int main() {
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;

    int reversedNum = 0;
    int absoluteNum = std::abs(num);

    reverseNumberRecursive(absoluteNum, reversedNum);

    if (num < 0) {
        reversedNum = -reversedNum;
    }

    std::cout << "Reversed number: " << reversedNum << std::endl;
    return 0;
}
