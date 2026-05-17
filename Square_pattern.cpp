#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    // cout<<"Enter the number of pattern: ";
    // cin>>n;
    // for (int i = 1; i <= n; i++) //outer
    // {
    //     for (int j = 1; j <= n; j++) //inner
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    // for (int i = 1; i <= n; i++) //outer
    // {
    //     for (int j = 1; j <= n; j++) //inner
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++) //outer
    // {
    //     char ch = 'A';
    //     for (int j = 0; j < n; j++) //inner
    //     {
    //         cout << ch;
    //         ch = ch + 1;  // A=65 ==> 65+1=66
    //     }
    //     cout << endl;
    // }

    // int num = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }

    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }

    return 0;
}