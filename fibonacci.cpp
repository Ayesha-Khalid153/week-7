#include<iostream>
using namespace std;

main()
{ 
    //declaring the variables.
    int limitOfNum;
    int fibonacci;
    //printing the statement on the console.
    cout <<"ENTER THE NUMBER TILL YOU WANNA SEE THE FIBONACCI SERIES= ";
    cin  >>limitOfNum;
    //initializing the variables to use in for loop.they will be the starting two digits of the fibonacci series.
    int previous =0;
    int current= 1;
    int next;
    cout <<previous <<","<<current;
    //now applying the for loop.
    for(int count=1; count <= limitOfNum-2; count = count + 1)
    {
        //adding 1st two numbers which were declared before to find the next number.
        next= previous + current;
        //fimally printing the value of next digit.
        cout <<","<<next;
        //giving the fisrt two numbers the value of post number to find the fibonacci series till required length.
        previous = current;
        current = next; 
    }
    //for loop has ended and ready to be executed.
}