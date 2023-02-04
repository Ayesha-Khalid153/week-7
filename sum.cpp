#include<iostream>
using namespace std;

main()
{
    int sum= 0;
    //initialized the sum integer.
    for(int count=-1; count <= 5;count= count + 1)
    //applied the for loop to add numbers from -1 to 5.
    {
    sum = sum + count;
    //applied the formula to sum the numbers.
    }
    cout<<"SUM:" <<sum;
    //to print the result on the console.
}