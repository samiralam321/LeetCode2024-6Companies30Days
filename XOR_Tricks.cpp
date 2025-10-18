#include <bits/stdc++.h>
using namespace std;

int main() {

    // Swap two numbers using XOR
    int a = 5, b = 9;
    a ^= b;  // a = a XOR b
    b ^= a;  // b = b XOR a (original a)
    a ^= b;  // a = a XOR b (original b)
    cout << "After swap: a = " << a << ", b = " << b << "\n";

    // Find the only non-repeating element in an array
    vector<int> arr = {2, 3, 5, 4, 5, 3, 2};
    int unique = 0;
    for (int x : arr) {
        unique ^= x; // XOR of all elements leaves the unique one
    }
    cout << "Unique element: " << unique << "\n";

    // XOR of all subsets of a set
    vector<int> set = {1, 2, 3};
    int xorAllSubsets = 0;
    // For any set, XOR of all subsets is 0 if size > 0
    // Let's demonstrate by generating all subsets
    int n = set.size();
    cout << "XOR of all subsets individually:\n";
    for (int mask = 0; mask < (1 << n); mask++) {
        int subsetXOR = 0;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) subsetXOR ^= set[i]; // include element in subset XOR
        }
        cout << "Subset mask " << mask << " XOR = " << subsetXOR << "\n";
        xorAllSubsets ^= subsetXOR; // XOR of all subset XORs
    }
    cout << "XOR of all subset XORs = " << xorAllSubsets << "\n";

    return 0;
}
