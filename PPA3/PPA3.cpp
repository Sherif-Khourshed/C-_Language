/*
 * PPA3.cpp
 *
 *  Created on: Sep 1, 2020
 *      Author: Sherif_Khourshed
 */


/*Question      : Write your code to find whether the number is a happy number or not (for max 10 cycles).
int number      : The number to be determined whether it is happy or not
int finalNumber : Store the resultant value in this variable
int cycle_no    : Store the number of iterations done to determine whether the 'number' is happy or not */

#include<iostream>
using namespace std;


void detectHappy(int number, int &finalNumber, int &cycle_no) {

    //Write your solution code below this line
    int sum, digit;
    for(cycle_no = 1; cycle_no <= 10; cycle_no++)
    {
        sum = 0;
        while(number > 0)
        {
            digit = number % 10;
            sum += (digit * digit);
            number /= 10;
        }
        if(sum == 1)
        {
            finalNumber = sum;
            cout << "finalNumber is " << finalNumber;
            cout << "cycle_no is " << cycle_no;
            break;
        }
        else
        {
            number = sum;
            if(cycle_no == 10)
            {
            finalNumber = sum;
            cout << "finalNumber is " << finalNumber;
            cout << "cycle_no is " << cycle_no;
            break;
            }
        }
    }
    /*
    finalNumber = sum;
    cout << "finalNumber is " << finalNumber;
    if(i == 11) i = 10;
    cycle_no = i;
    cout << "\ncycle_no is " << cycle_no;
    */
}


int main (void)
{

}
