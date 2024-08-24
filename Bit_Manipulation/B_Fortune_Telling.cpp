#include <iostream>
#include <vector>

#define MOD 1000000007

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<long long> count(n + 1, 0);
    vector<long long> result(n + 1, 1); // Initially, all counts are 1 (for sequences of length 1)

    // For each sequence length from 2 to k, update counts
    for (int len = 2; len <= k; ++len) {
        for (int i = 1; i <= n; ++i) {
            count[i] = 0;
        }

        // Calculate count[i] based on result[x] where x is a divisor of i
        for (int i = 1; i <= n; ++i) {
            for (int j = i; j <= n; j += i) {
                count[j] = (count[j] + result[i]) % MOD;
            }
        }

        // Update result for the next iteration
        for (int i = 1; i <= n; ++i) {
            result[i] = count[i];
        }
    }

    // Sum up all sequences of length k
    long long total = 0;
    for (int i = 1; i <= n; ++i) {
        total = (total + result[i]) % MOD;
    }

    cout << total << endl;

    return 0;
}
