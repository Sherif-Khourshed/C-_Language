/*
 * PPA1.cpp
 *
 *  Created on: Sep 9, 2020
 *      Author: Sherif_Khourshed
 */

/* Question   : Write your code to assign value -1 to 5 to the variable 'ageResult', depending on the value of variable 'age'.
 int age      : Age of a person
 int ageResult: Store the resultant value in this variable */

#include<iostream>
using namespace std;

void detectAgeResult(int age, int &ageResult) {

    //Write your solution code below this line

    if(age < 0) {
        ageResult = -1;
    }
   else if(age > 101) {
        ageResult = -1;
   }
   else if(age >= 0 && age <= 5) {
        ageResult = 0;
    }
   else if(age >= 6 && age <= 12) {
        ageResult = 1;
    }
   else if(age >=13 && age <= 19) {
        ageResult = 2;
    }
   else if(age >= 20 && age <= 50) {
        ageResult = 3;
    }
    else if(age >=51 && age <= 60) {
        ageResult = 4;
    }
    else  {
        ageResult = 5;
    }
}

int main(void)
{

}
