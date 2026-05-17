#include <iostream>
using namespace std;
int main()
{
    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout<<endl;
    // }

    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout << (i+1)<<" ";
    //     }
    //     cout<<endl;
    // }

    // char ch = 'A';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << ch << " ";
    //     }
    //     ch++; // Move to next letter
    //     cout << endl;
    // }


    int n = 4;
    for(int i=0;i<n;i++){
        for(int j=1;j<=i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}