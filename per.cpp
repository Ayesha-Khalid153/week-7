#include <iostream>
using namespace std;
void printPercentage(int number);
main()
{
    int numberr;
    cout << "<ENTER THE NUMBER= ";
    cin >> numberr;
    printPercentage(numberr);
}
void printPercentage(int number)
{
    float num1 = 0;
    float num2 = 0;
    float num3 = 0;
    float num4 = 0;
    float num5 = 0;
    float p1, p2, p3, p4, p5;
    for (int i = 1; i <= number; i++)
    {
        int input;
        cin >> input;
        if (input > 0 && input <= 199)
        {
            num1 = num1 + 1;
        }
        if (input >= 200 && input <= 399)
        {
            num2 = num2 + 1;
        }
        if (input >= 400 && input <= 599)
        {
            num3 = num3 + 1;
        }
        if (input >= 600 && input <= 799)
        {
            num4 = num4 + 1;
        }
        if (input >= 800)
        {
            num5 = num5 + 1;
        }
    }
    p1 = (num1 * 100) / number;
    cout << p1 << "%" << endl;
    p2 = (num2 * 100) / number;
    cout << p2 << "%" << endl;
    p3 = (num3 * 100) / number;
    cout << p3 << "%" << endl;
    p4 = (num4 * 100) / number;
    cout << p4 << "%" << endl;
    p5 = (num5 * 100) / number;
    cout << p5 << "%" << endl;
}