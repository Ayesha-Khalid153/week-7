#include <iostream>
using namespace std;
// making a function that will calculate the percentages of the number which are divisible by 2,3,4 without remainder.
void percentage(int number);
main()
{
    // declaring a variable that will ask value from the user.
    int number;
    cout << "ENTER A NUMBER= ";
    // storing the number.
    cin >> number;
    // calling the function.
    percentage(number);
}
void percentage(int number)
{
    // decalring the variables that have initial values at 0 and will be used in addition.
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    // declaring the variables for percentages.
    int p1, p2, p3;
    // using for loop for counting.
    for (int i = 1; i <= number; i++)
    {
        // declaring the variable of which we will take the mode.
        int num;
        cin >> num;
        // this if condition is checking all the numbers which has 0 remainder when divided by 2.
        if (num % 2 == 0)
        {
            num1 = num1 + 1;
        }
        // this if condition is checking all the numbers which has 0 remainder when divided by 3.
        if (num % 3 == 0)
        {
            num2 = num2 + 1;
        }
        // this if condition is checking all the numbers which has 0 remainder when divided by 4.
        if (num % 4 == 0)
        {
            num3 = num3 + 1;
        }
    }
    // calculating percentage of number with 0 remainder when divided by 3.
    p1 = num1 * 100 / number;
    cout << p1 << "%" << endl;
    // calculating percentage of number with 0 remainder when divided by 3.
    p2 = num2 * 100 / number;
    cout << p2 << "%" << endl;
    // calculating percentage of number with 0 remainder when divided by 4.
    p3 = num3 * 100 / number;
    cout << p3 << "%" << endl;
}