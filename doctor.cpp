#include<iostream>
#include<cmath>
using namespace std;
main()
{
    //declaring variable to store the period of the patients.
    int period;
    int untreated = 0;
    int treated = 0;
    int doctor = 7;
    cout <<"ENETR THE PERIOD OF PATIENTS IN RANGE OF[1 TO 1000]= ";
    cin  >>period;
    int numberOfPatients = 0;
    //declaring variables to store number of untreated patients.
    int temp_untreated = 0;
    //declaring variables to store number of treated patients.
    int temp_treated = 0;
    //using loop to repeat the process until he value i becomes equalto the period of the patients.
    for(int i=0; i<period; i++)
    {
        //asing user for the number of the patients.
        cout <<"ENTER THE NUMBER OF PATIENTS FOR CURRENT DAY= ";
        cin  >>numberOfPatients;
        //usingif condition to check whether the treated patients are greater or less than the untreated patients.
        if(i % 2 == 0)
        {
            //if untreated patients are greater than the treated ones than one doctor will be added.
            if(temp_untreated > temp_treated){
                temp_treated = 0;
                temp_untreated = 0;
                doctor++;
            }
        }
        //using condition to check the total number of treated patients.
        if(numberOfPatients <= doctor)
        {
            treated = treated + numberOfPatients;
            temp_treated = temp_treated + numberOfPatients;
        }
        if(numberOfPatients > doctor)
        {
            //declaring variables to store number of untreated patients.
            untreated = untreated + (numberOfPatients - doctor);
            temp_untreated = temp_untreated + (numberOfPatients - doctor);
            treated = treated + doctor;
            temp_treated = temp_treated + doctor;
        }
        
    }
    //now printing on the console the actual number of treated patients.
        cout <<"TREATED PATIENTS= "<<treated;
        //now printing on the console the actual number of untreated patients.
        cout <<"UNTREATED PATIENTS= "<<untreated;
}