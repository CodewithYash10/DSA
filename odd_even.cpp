#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int i = 0;
    while(i < 1) { // Runs only once, simulating a single check
        if(n % 2 == 0) {
            cout << "Even" << endl;
        } else {
            cout << "Odd" << endl;
        }
        i++; // Increment to exit the loop
    }

    return 0;
}
