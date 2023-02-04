#include<iostream>
using namespace std;
void asterisks(int row);
main()
{
    int  row;
    cout <<"ENTER THE NUMBER OF ROWS= ";
    cin  >>row;
    asterisks(row);
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
        //applying endl to terminate the line and start printing from next line.
        cout <<endl;
    }
}