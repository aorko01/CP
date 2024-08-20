#include <iostream>
#include <set>
using namespace std;

bool canObtainSum(int n, int m, set<int>& usedPowers) {
    // Special case when m = 1
    if (m == 1) {
        if (n == 1 && usedPowers.find(1) == usedPowers.end()) {
            usedPowers.insert(1);
            return true;
        }
        return false;
    }

    // Start with the largest power of m less than or equal to n
    long long power = 1;
    while (power <= n) {
        power *= m;
    }

    // Go back to the highest power less than or equal to n
    power /= m;

    // Subtract powers of m from n
    while (n > 0 && power > 0) {
        if (n >= power) {
            if (usedPowers.find(power) != usedPowers.end()) {
                return false; // Power already used
            }
            n -= power;
            usedPowers.insert(power); // Add this power to the set
        }
        power /= m;
    }

    // If n is reduced to 0, it means we can express it as the sum of distinct powers of m
    return n == 0;
}

int main() {
    int n = 31;
    int m = 3;
    set<int> usedPowers;

    
    if(canObtainSum(3,m,usedPowers)){
        cout << "Yes, " << 3 << " can be obtained by summing distinct powers of " << m << "." << endl;
    } else {
        cout << "No, " << 3 << " cannot be obtained by summing distinct powers of " << m << "." << endl;
    }
    if (canObtainSum(n, m, usedPowers)) {
        cout << "Yes, " << n << " can be obtained by summing distinct powers of " << m << "." << endl;
    } else {
        cout << "No, " << n << " cannot be obtained by summing distinct powers of " << m << "." << endl;
    }

    return 0;
}