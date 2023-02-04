#include <iostream>
using namespace std;
int calculateHCF(int num1, int num2);
int calculateLCM(int num1, int num2);
main()
{
    int number1;
    int number2;
    int result1;
    int result2;
    cout << "ENTER FIRST NUMBER= ";
    cin >> number1;
    cout << "ENTER SECOND NUMBER= ";
    cin >> number2;

    result1 = calculateHCF(number1, number2);
    cout << "HCF= " << result1 << endl;
    result2 = calculateLCM(number1, number2);
    cout << "LCM= " << result2 << endl;
}
int calculateHCF(int num1, int num2)
{
    int hcf;
    for (int i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }
    return hcf;
}
int calculateLCM(int num1, int num2)
{
    int result;
    int lcm;
    result = calculateHCF(num1, num2);
    lcm = (num1 * num2) / result;
    return lcm;
}