//write a simple program that admits a  child to school if he/she is aged 4yrs and above

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Please Enter the age:";
    cin>>age;

    if (age>=4)
    {
        cout<<"Admitted! Proceed to Registration"<<endl;
    }
    else{
        cout<<"Declined! Mimimum Age not Reached"<<endl;
    }
    // Using ternary operator
    cout << "Using ternary operator" << endl;
    string message =  ( age >= 4) ? "Admit to school," :"Decline! Minimum age not reached.";
    cout<<message<<endl;

    return 0;
}