#include <iostream>

using namespace std;

int main()
{   
    //using array to store 2 numbers
    int num[2];
    //using char to store the operator
    char oper;

    
    //asking the user to input 2 numbers
    cout<<"Please enter two numbers: ";
    cin>>num[1]>>num[2];

    //asking the user to input an operator
    cout<<"Choose an operator (+,-,*,/,%): ";
    cin>>oper;

    //using switch case to select the operation needed
    switch(oper)
    {
    case '+':
        cout<<num[1]<<" + "<<num[2]<<" = "<<num[1]+num[2];
        break;
    case '-':
        cout<<num[1]<<" - "<<num[2]<<" = "<<num[1]-num[2];
        break;
    case '*':
        cout<<num[1]<<" * "<<num[2]<<" = "<<num[1]*num[2];
        break;
    case '/':
        cout<<num[1]<<" / "<<num[2]<<" = "<<num[1]/num[2];
        break;
    case '%':
        cout<<num[1]<<" % "<<num[2]<<" = "<<num[1]%num[2];
        break;
    //default displays an error
    default:
        cout<<"Wrong operator, exiting program";
        break;
    }
}
