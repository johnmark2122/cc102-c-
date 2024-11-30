#include <iostream>
using namespace std;

int main() {
    int n = 8; // Number of rows
    for (int i = n; i >= 1; i--) { // Outer loop for rows
        for (int j = 1; j <= i; j++) { // Inner loop for stars in each row
            cout << "#";
        }
        cout << endl; // Move to the next line
    }
    return 0;
}