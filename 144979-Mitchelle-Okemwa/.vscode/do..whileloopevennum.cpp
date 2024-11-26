#include <iostream>
using namespace std;

int main() {
     // Start from 12
    int num = 12; 

    do {
        cout << num << " "; // Output the current number
        num += 2;           // Increment by 2 to get the next even number
    } while (num <= 50);     // Continue until the number exceeds 50

    return 0;
}