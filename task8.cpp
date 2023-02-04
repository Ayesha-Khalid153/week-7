#include <iostream>
using namespace std;
main()
{
    // decalring a variable that will store te number of cargoes entered by the user.
    int totalCargoes;
    // asking the user to enter the number of cargoes.
    cout << "ENTER THE TOTAL NUMBER OF THE CARGOES[1 TO 1000]= ";
    // storing the number of cargoes.
    cin >> totalCargoes;
    // declaring a variable that will ask the user to enter the cargoes the times user have told in "totalCargoes" variable.
    int cargoes;
    // decalring variables that will add the cargoes for minibus, truck and train.
    int sum = 0;
    int sum1, sum2, sum3;
    // decalring variable of minibus that will calculates the cargoes which are gonna be in minibus according to the applied condition.
    int minibus = 0;
    // decalring variable of minibus that will calculates the cargoes which are gonna be in trtuck according to the applied condition.
    int truck = 0;
    // decalring variable of minibus that will calculates the cargoes which are gonna be in train according to the applied condition.
    int train = 0;
    // applying counter loop
    for (int i = 1; i <= totalCargoes; i++)
    {
        // asking the user to enter the cargoes.
        cout << "ENTER THE CARGO= ";
        cin >> cargoes;
        // caculating the total cargoes.
        sum = sum + cargoes;
        // the condition which tells if cargoes are less than and equals to one will be in minibus.
        if (cargoes <= 3)
        {
            minibus = minibus + cargoes;
        }
        // the condition tells if the cargoes are greater than 3 and less than 11 then they will be in truck.
        else if (cargoes > 3 && cargoes < 11)
        {
            truck = truck + cargoes;
        }
        // te condition tells if the cargoes are greater than 11 thn they will be stored  in train.
        else if (cargoes > 11)
        {
            train = train + cargoes;
        }
    }
    // calculating the percentage of cargoes in minibus.
    int percentageMiniBus = minibus * 100 / sum;
    cout << percentageMiniBus << "%" << endl;
    // calculating the percentage of cargoes in truck.
    int percentageTruck = truck * 100 / sum;
    cout << percentageTruck << "%" << endl;
    // calculating the percentage of cargoes in train.
    int percentgeTrain = train * 100 / sum;
    cout << percentgeTrain << "%" << endl;
    // calculating the total price of all the cargoes in minibus, truck and train.
    int totalPrice = (((minibus)*200) + ((truck)*175) + ((train)*120)) / sum;
    cout << totalPrice << endl;
}