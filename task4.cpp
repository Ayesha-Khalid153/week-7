#include<iostream>
using namespace std;
void count(int num);
main()
{
    //declaring the variable to ask number from user upto which counting is going to be printed.
    int number;
    cout <<"enter the higest number of the sequence= ";
    cin  >>number;
    count(number);
}
void count(int num)
{
    //applying the loop to print the counting upto given number.
    for(int i=1 ; i <= num; i++)
    {
        //taking mode of number with i to get the exactly divisible numbers with 4.
        if(i % 4 == 0 )
        {
        //amplifying the number with ten..
        cout<<i*10<<endl;
        //using continue loop to skip the value of numbers which are exactly divisible by 4..
        continue;
        }
        cout <<i<<" ";
    }
}