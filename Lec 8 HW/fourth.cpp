#include<iostream>
using namespace std;

int main()
{
    for(int row = 0; row < 5; row++) {
        for(int col = 0; col < 5; col++) {
            char ch = 'F' + col;
            cout << ch << " ";
        }
        cout << endl;
    }
}
