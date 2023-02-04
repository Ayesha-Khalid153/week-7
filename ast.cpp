#include<iostream>
using namespace std;
main()
{
    int number=0;
    cout << "ENTER THE NUMBER= ";
    cin  >>number;
    for(int i=1; i<=number; i++)
    {
        for(int j=i; j<=number; j++)
        {
            cout <<" ";
        }
        for(int j=1; j<=i; j++)
        {
            cout <<"*";
        }
        cout <<endl;
    }
    for(int j=1; j<=number; j++)
    {
        for(int i=1; i<=j; i++)
        {
            cout <<" ";
        }
        for(int i=j; i<=number; i++)
        {
            cout <<"*";
        }
        cout <<endl;
    }
}