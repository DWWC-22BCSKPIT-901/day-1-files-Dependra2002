#include <iostream>
using namespace std;

int main() {
    
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    
    if (n >= 1 && n <= 1000000000) {
        int digit_count = 0;

        
        while (n > 0) {
            n /= 10;  
            digit_count++;  
        }

        
        cout << digit_count << endl;
    } else {
        cout << "Input must be between 1 and 10^9." << endl;
    }

    return 0;
}
