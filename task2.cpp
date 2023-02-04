#include<iostream>
using namespace std;
int totalDigits(int number);
main()
{
    //going to make a program in which user will have to enter a number and  we will tell how many digits the number has.
    //declaring the number in which user's demanding number will be stored
    int num;
    //declaring another variable to store the value from the called function.
    int conclusion;
    //demanding the number from the user.
    cout <<"ENTER THE NUMBER= ";
    //storing the number.
    cin  >>num;
    //calling the function.
    conclusion = totalDigits(num);
    cout <<"THE TOTAL DIGITS IN THE REQUIRED NUMBER ARE= "<<conclusion;
}
//using the function for the calculations.
int totalDigits(int number)
{   //initializing another variable which will count the number of non zero quotients.
    int counter=0;
    //using while loop to check again and again.if quotient will be zero then the program must stop.
    while(number > 0)
    {
        //diving the number with 10 and getting the quotients..
        number = number / 10;
    //incrimenting in counter if the number is non zero untill we get the zero it wont stop.
        counter = counter + 1;
    }
    //returning the value of counter which will be used in the main.
    return counter;
}