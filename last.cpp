#include<iostream>
using namespace std;
float enoughMoney(float totalPrice, int year);
main()
{
    int year;
    float totalPrice;
    float sum;
    cout <<"ENTER THE INHERITED MONEY[1 TO 1000000]= ";
    cin  >>totalPrice;
    cout <<"ENTER THE YEAR[1801 TO 1900]= ";
    cin  >>year;
    int counter=0;
    float result;
    result=enoughMoney(totalPrice, year);
    if(result > 0)
    {
        cout <<"YES! HE WILL LIVE A CAREFREE LIFE AND WILL HAVE "<<result<<" DOLLARS"<<endl;
    }
    if(result < 0)
    {
        cout <<"NO! HE WILL NEED "<<result<<"DOLLARS TO SURVIVE.."<<endl;
    }
}
float enoughMoney(float totalPrice, int year)
{
    int age=18;
    int calculation;
    for(int i=1800; i<=year; i++)
    {
        if(i % 2 == 0)
        {
            totalPrice = totalPrice -  12000;
        }
        else if(i % 2 != 0)
        {
            calculation =12000 + 50 * age;
            totalPrice = totalPrice - calculation;
        }
        age++;
    }
    return totalPrice;
}