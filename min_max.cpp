#include <iostream>
#include <climits> // <-- Added this to fix the INT_MAX error
using namespace std;

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Loop to find the min value
    int ans = INT_MAX;
    for(int i = 0; i < 10; i++) {
        if(arr[i] < ans) {
            ans = arr[i];
        }
    }
    
    cout << "Minimum value is " << ans << endl;

    // Loop to find the max value
    ans = INT_MIN;
    for(int i = 0; i < 10; i++) {
        if(arr[i] > ans) {
            ans = arr[i];
        }
    }

    cout << "Maximum value is " << ans << endl;

    return 0;
}