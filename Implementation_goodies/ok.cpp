#include <iostream>

bool hasAdjacentOnes(int num) {
    // Check if there are two adjacent ones
    return (num & (num >> 1)) != 0;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (hasAdjacentOnes(num)) {
        std::cout << "The number has two adjacent ones in its binary representation." << std::endl;
    } else {
        std::cout << "The number does not have two adjacent ones in its binary representation." << std::endl;
    }

    return 0;
}
