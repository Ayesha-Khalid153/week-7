#include <iostream>
using namespace std;
// making a function that will calculate the total digits of the number entered by the user.
int totalDigits(int num);
main()
{
    // declaring a variable to ask the a number from the user.
    int number;
    // declaring a variable to store the value of calling function.
    int result;
    // asking the number from the user.
    cout << "ENTER THE NUMBER= ";
    cin >> number;
    // calling the function.
    result = totalDigits(number);
    // showing the output on the console.
    cout << "THE TOTAL DIGITS IN THIS NUMBER ARE= " << result;
}
int totalDigits(int num)
{
    // decalring the variable which will be counting.
    int counter = 0;
    while (num > 0)
    {
        // dividing the number by 10 to get the quotient and after that it will count one and will divinde again and the process will goes on until user enter a number less than or equal to zero according to the condition in while loop.
        num = num / 10;
        counter++;
    }
    return counter;
}