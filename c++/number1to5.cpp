#include <iostream>
using namespace std;
int main()
{
    // 1 2 3 4 5
    // 1 2 3 4 5

    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= 5; col++)
        {
            cout << col << " ";
        }
        cout<<endl;
    }

    // 1 1 1 1 1
    // 2 2 2 2 2 
    // 3 3 3 3 3 

    
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= 5; col++)
        {
            cout << row << " ";
        }
        cout<<endl;
    }
}