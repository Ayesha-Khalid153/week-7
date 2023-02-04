#include <iostream>
using namespace std;
//making a function which will calculate the number of the dots.
void numberOfDots(int num);
main()
{
    //declaring a variable to store the value which user will enter.
    int number;
    cout << "ENTER A NUMBER= ";
    cin >> number;
    //calling the functiion.
    numberOfDots(number);
}
void numberOfDots(int num)
{
    //declaring a variable with initial value zero to sum the dots.
    int sum = 0;
    //using for loop for counting.
    for (int i = 1; i <= num; i++)
    {
    //using formula  of sum.
        sum = sum + i;
    }
    //showing the output on the screen.
    cout << sum;
}