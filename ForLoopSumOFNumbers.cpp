// ForLoopSumOFNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>//header file to include cin and cout for input and output
using namespace std;

int main()
{
    int i;
    float serious_saver = 0;
    float weekly_amount;


    /* for loop contains initialization of counter variable, condition
     to check final value and incrementation */
    for (i = 0; i < 5; i++) {
        cout << "\n Please enter the amount for week " << i+1 << " in NZ$ : ";
        cin >> weekly_amount;
        //cout << "\n YOOBEE COLLEGES \n";
        serious_saver = serious_saver + weekly_amount; // increment by 1 and add to the existing variable

    }
    cout << "\n You saved different amounts for 5 weeks" << endl;
    cout << "\n So,the total amount at the end of 5 weeks in the serious saver is NZ$ \t" << serious_saver;
    
}

