#include <iostream>
#include <string>
using namespace std;

int main()
{
    string childName, interest;
    int age;
    // Prompt user for child name
    cout<<"Please enter the child's full name:";
    getline(cin, childName);
    
    cout << "Please enter the child's age:";
    cin>> age;

    if (age >= 4 && age <=10) //arguments
    {
        cout <<"Please enter the child's interest: ";
        cin >> interest;
        if (interest == "soccer")//First nested IF
        {
             cout << childName << "has been Admitted and assigned to the Soccer play group."<<endl;
        }
        else if (interest == "art") //second nested IF
        {
            cout << childName << "has been Admitted and assigned to the Art play group."<<endl;
        }
        else
        {
           cout<< childName<<"has been Admitted and assigned to other groups."<<endl;
        }
    }
    else
    {
        cout<<"Admission unsuccessful." <<childName<<"'s age is invalid"<<endl;
    }
    return 0;
}