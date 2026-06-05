#include <iostream>
using namespace std;
int main()
{
    int i, pow, number, n;
    cin>>n;
    cin>>pow;
    number = n;
    for (i = 1; i < pow; i++)
    {
        number = number * n;
    }
    cout<<number;
}