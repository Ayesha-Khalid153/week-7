#include <iostream>
using namespace std;
int frequencyChecker(int number, int digit);
main()
{
    // declaring the number to ask the number and digit of which we have to check the frequency will be stored..
    int num;
    int digits;
    // declaring another variable to store the returning value of called function..
    int conclusion;
    // asking the number from the user...
    cout << "ENTER THE NUMBER= ";
    cin >> num;
    // asking the number of which we have to check the frequency...
    cout << "ENTER THE DIGIT= ";
    // storing the digit..
    cin >> digits;
    // calling the function
    conclusion = frequencyChecker(num, digits);
    // showing the output on console which will show the frequency of the digit in number
    cout << "THE FREQUENCY OF THE GIVEN NUMBER IS= " << conclusion;
}
//
int frequencyChecker(int number, int digit)
{
    // decalring a variable which will be counting the iterations.
    int counter = 0;
    int mode;
    int divide;
    // applying for loop to conotinue the process until user enters zero or value less than zero.
    while (number > 0)
    {
        // we will divide the number for quotient.
        divide = number / 10;
        // now taking the mode of the number for remainder.
        mode = number % 10;
        // now we will update the value of number with division variable "divide".
        number = divide;
        // adding a condition which tells if the mode becomes equals to the digit then counter variable will count one.
        if (mode == digit)
        {
            counter = counter + 1;
        }
    }
    return counter;
}