#include <iostream>
using namespace std;
int main()
{
    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1

    for (int row = 1; row <= 5; row++)
    {
        for (int col = 5; col >= 1; col--)
        {
            cout << col << " ";
        }
        cout<<endl;
    }
}