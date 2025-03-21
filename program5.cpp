#include <iostream>

using namespace std;

int main()
{
    //using array to store grades
    double grade[4],sum,average;

    //for loop to store 4 grades
    for(int i=1; i<5; i++)
    {
        cout<<"Please enter your grade for quarter "<<i<<" (0-100): ";
        cin>>grade[i];

        //validates the input from the user
        if(grade[i]>=0 && grade[i]<=100)
        {
            //continues the loop if the input is valid
            continue;
        }
        else
        {
            //using goto to skip the loop if the input is invalid
            goto error;
        }

    }

    //using for loop to add the grades
    for(int i = 1; i<5; i++)
    {
        sum += grade[i];
    }
    average = sum/4;
    cout<<"The average grade is: "<<average;
    //using goto to avoid displaying the error program and finishes the program
    goto done;

    //the program skips here if an input is invalid
    error:
    cout<<"Invalid grade! Exiting program!";

    //the program skips here if the average is displayed
    done:

 return 0;
}
