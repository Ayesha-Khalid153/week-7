#include <iostream>
using namespace std;
// function to calculate the price
float calculateMoney(int age, int price, int unitPrice);
main()
{
    int lillyAge;
    // declaring the variable to store the result from called function...
    int result;
    int priceOfWashingMachine;
    int unitPriceOfToys;
    // asking the variables from the user...
    cout << "ENTER THE AGE OF LILLY IN RANGE OF[1-77]= ";
    cin >> lillyAge;
    cout << "ENETR THE PRICE OF WASHING MACHINE IN RANGE  OF [1.00-10000.00]= ";
    cin >> priceOfWashingMachine;
    cout << "ENTER THE UNIT PRICE OF THE TOYS IN RANGE OF [1-40]= ";
    cin >> unitPriceOfToys;
    // calling the function and shoeing the output on the screen...
    result = calculateMoney(lillyAge, priceOfWashingMachine, unitPriceOfToys);
    if (result > 0)
    {
        cout << "YES! " << endl<< result;
    }
    if (result < 0)
    {
        result = -(result);
        cout << "NO!" << endl<< result << endl;
    }
}
float calculateMoney(int age, int price, int unitPriceOfToys)
{
    int evenBirthday;
    int oddBirthday;
    int currentBalance = 0;
    int oddBalance = 0;
    int evenBalance = 0;
    int evenPrice=0;
    int totalBalance;
    int finalBalance;
    if (age % 2 == 0)
    {
        evenBirthday = (age / 2);
        oddBirthday = evenBirthday;
    }
    if (age % 2 != 0)
    {
        oddBirthday = (age / 2) + 1;
        evenBirthday = (age / 2);
    }
    for (int i = 1; i <= evenBirthday; i++)
    {
        evenPrice = evenPrice + currentBalance;
        currentBalance = currentBalance + 10;
    }
    evenBalance = evenBalance - evenBirthday;
    cout << evenBalance << endl;
    oddBalance = oddBirthday * unitPriceOfToys;
    cout << oddBalance << endl;
    totalBalance = evenBalance + oddBalance;
    cout << totalBalance << endl;
    finalBalance = totalBalance - price;
    cout << finalBalance;
    return finalBalance;
}
