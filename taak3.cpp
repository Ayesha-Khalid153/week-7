#include<iostream>
using namespace std;
void asterisks(int row);
void asterisk(int row);
main()
    {
    int  row;
    cout <<"ENTER THE NUMBER OF ROWS= ";
    cin  >>row;
    asterisks(row);
    asterisk(row);
}
    void asterisks(int row)
{
    //applying the loops to print asterisks on the screen
    //applying condition for printing rows
    for(int i = 1 ; i<= row ; i++)
    {
        //applying condition for printing coloumns
        for(int j = 1 ; j <= i; j++)
        {
        cout <<"*";
        }
        cout <<endl;
    }
}
void asterisk(int row)
{
    //applying the loops to print asterisks on the screen
    //applying condition for printing rows
    for(int i = row ; i >= 1 ; i--)
    {
        //applying condition for printing coloumnss
        for(int j = 1 ; j <= i; j++)
        {
        cout <<"*";
        }
        cout <<endl;
    }
}