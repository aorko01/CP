#include <iostream>
#include <vector>
#include <string>

std::vector<int> lengthOfZeroBlocks(const std::string &binaryString) {
    std::vector<int> zeroLengths;
    int currentLength = 0;
    bool inBlock = false;

    for (char ch : binaryString) {
        if (ch == '1') {
            if (inBlock && currentLength > 0) {
                zeroLengths.push_back(currentLength);
            }
            inBlock = true;
            currentLength = 0;
        } else if (ch == '0' && inBlock) {
            currentLength++;
        }
    }

    return zeroLengths;
}

int main() {
    std::string binaryString = "10101";
    std::vector<int> zeroLengths = lengthOfZeroBlocks(binaryString);

    for (int length : zeroLengths) {
        std::cout << length << " ";
    }

    return 0;
}
