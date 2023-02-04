#include<iostream>
using namespace std;
//declaring the function for additio of the digits of the number.
float summation(int addition);
main()
{
    float result;
    //declaring the variable to ask required number from the user.
    int number;
    //asking the number from the user and then storing it.
    cout <<"ENTER THE NUMBER=  ";
    cin  >>number;
    //calling the function and showing the output on the screen.
    result = summation(number);
    cout <<"THE SUM OF THE DIGITS OF GIVEN NUMBER IS= "<<result;
}
float summation(int num)
{
    float sum=0;
    float mode;
    float divide;
    while(num > 0)
    {
    //taking mode of the number to get the remainder so we can calculate the sum of all the numbers.
    mode= num % 10;
    divide=num / 10;
    //updating the value of the number. 
    num = divide;
    //applying the sumation formula.
    sum = sum + mode; 
    }
    return sum;
}