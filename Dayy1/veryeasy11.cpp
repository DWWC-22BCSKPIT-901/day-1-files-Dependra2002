#include <iostream>
using namespace std;

int main() {
   
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n >= 1 && n <= 10000) {
        
        int total_sum = n * (n + 1) / 2;
        
        
        cout << total_sum << endl;
    } else {
        cout << "Input must be between 1 and 10^4." << endl;
    }

    return 0;
}

