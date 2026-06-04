#include<iostream>
using namespace std;
int main()
{
    int package;
    cout<<"Enter a package : ";
    cin>>package;

    if(package>10){
        cout<<"Acepted";
    }else{
        cout<<"Rejected";
    }
}