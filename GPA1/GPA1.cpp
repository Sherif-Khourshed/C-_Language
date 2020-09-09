/*
 * GPA1.cpp
 *
 *  Created on: Sep 1, 2020
 *      Author: Sherif_Khourshed
 */


/* Question:  You are required to write code that does the following:-

1. Find out the sum of the squares of the digits of the rpm
2. Multiply the number obtained in (1) by 323
3. Do a cyclic right shift of digits of the rpm i.e.
    if Number is 1234, after cyclic right shift, the number will be 4123.
    Thereafter, take the last two digits of the number obtained just now, and add it to the number obtained in point 2. Thus, obtaining a new rpm value.
4. Do these steps till the number of years are 10 or the harddisk has reached the maximum RPM

long long int rpm: Original value of RPM
int years: Store the number years that have elapsed
long long int finalRPM: Store the modified value of RPM i.e. the final of RPM */

#include<iostream>
using namespace std;

void solutionRPM(long long int rpm, int &years, long long int &finalRPM) {

    //Write your solution code below this line
    long long int SSD, temp1, A, temp2, rem, temp3, B, temp4;
    const long long int check = rpm;
    int digit, counter, i, TwoDigitsOfB;
    for(years = 1; years <= 10; years++)
    {
        SSD = 0, counter = 0;
        temp1 = rpm;
        while(temp1 > 0)
        {
            digit = temp1 % 10;
            SSD += (digit * digit);
            temp1 /= 10;
        }
        // I have SSD

        A = SSD * 323;
        // I have A

        temp2 = rpm;
        rem = temp2 % 10;
        temp2 = temp2 /10;
        temp3 = temp2;
        while (temp2 > 0)
        {
        temp2 = temp2 /10;
        counter++;
        }
        for(i = 0; i < counter; i++)
        {
            rem *= 10;
        }
        B = rem + temp3;
        // I have B

        temp4 = B % 10;
        TwoDigitsOfB = temp4;
        B /= 10;
        temp4 = (B % 10) * 10;
        TwoDigitsOfB += temp4;
        finalRPM = A + TwoDigitsOfB;
        // I have finalRPM

        if(finalRPM >= (check * 8))
        {
            cout << finalRPM;
            cout << years;
            break;
        }
        else
        {
            rpm = finalRPM;
            if(years == 10)
            {
            cout << finalRPM;
            cout << years;
            break;
            }
        }
    }
}


int main(void)
{
	/*
	long long int rpm = 5524;
	int years;
	long long int res;
	solutionRPM(rpm, years, res);
	*/
}
