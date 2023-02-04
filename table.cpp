#include<iostream>
using namespace std;
main()
{
    //declaring the variables to store the number of which we want to print the table
    int number;
    //asking for the desired number fromm the user
    cout <<"ENTER THE NUMBER OF WHICH YOU WANT TO PRINT THE TABLE= ";
    //storing the number
    cin  >>number;
    //using for loop to print the table.
    for(int i=1; i <= 10 ; i =i+1)
    {
    cout <<number<<"*"<<i<<"="<<number * i<<endl;
    }
}