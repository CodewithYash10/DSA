#include <iostream>
using namespace std;
int main()
{
    // int a,b,c;
    // cin>>a>>b>>c;
    // if(a>b&&a>c)
    // cout<<"Yes";
    // else
    // cout<<"no";

    char name;
    cin >> name;
    if (name == 'a' || name == 'e' || name == 'i' || name == 'o' || name == 'u')
        cout << "vowel";
    else
        cout << "consonant";
}