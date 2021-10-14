/*
Ranged-Based For Loops
-introduced in the C++11 standard

This example shows the differences and similarities between 
Traditional For Loops and Range-Based For Loops.

1. Initializes an array
2. Prints items (Using Traditional For Loop)
3. Prints items (Using Range-Based For Loop)
4. Exits

Use -std=c++11 flag to compile, e.g:
   g++ -std=c++11 test.cpp -o test
*/

#include <iostream>
using namespace std;

const int N = 5;

int main() {
    // Initializes an array of N strings:
    string coins[N] = {"BTC", "ETH", "BNB", "DOGE", "CUMMIES"};

    cout << "Traditional for loop:\n";
    // Prints items (using traditional for loop):
    for (int i = 0; i < N; i++) {
        cout << coins[i]
             << endl;
    }

    cout << "Range-based for loop:\n";
    // Prints items (using range-based for loop):
    for (string i : coins) {
        cout << i
             << endl;
    }
    
    return 0;
}
