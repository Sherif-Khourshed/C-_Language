/*
 * PPA2.cpp
 *
 *  Created on: Sep 9, 2020
 *      Author: Sherif_Khourshed
 */

/* Question: Find the sum of squares of individual digits of a number 'sqdnumber' and store the sum in variable 'sqdNumber_result'.
int sqdnumber: Original number
int sqdNumber_result: Store the resultant in this variable */

#include<iostream>
using namespace std;

void squaredSum(int sqdnumber,int &sqdNumber_result) {
    //Write your solution code below this line
    int digit, sum = 0;

     while(sqdnumber > 0)
        {
            digit = sqdnumber % 10;
            sum += (digit * digit);
            sqdnumber /= 10;
        }
        sqdNumber_result = sum;
        cout << "sqdNumber_result is: " << sqdNumber_result;
}

int main(void)
{

}



