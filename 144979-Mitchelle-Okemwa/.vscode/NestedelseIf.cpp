#include <iostream>
#include <string>
using namespace std;

int main()
{
    string childName;
    int age;

    // Prompt user for child name
    cout << "Please enter the child's full name: ";
    getline(cin, childName);
       
    // Prompt user for the child's age
    cout << "Please enter the child's age: ";
    cin >> age;

    // Check the child's age and assign to the appropriate group
    if (age >= 7) // First condition for 7 years and older
    {
        cout << childName << " has been admitted to Grade School." << endl;
    }
    else if (age >= 5 && age <= 6) // First nested IF for ages 5 to 6
    {
        cout << childName << " has been admitted to Kindergarten." << endl;
    }
    else if (age >= 3 && age <= 4) // Second nested IF for ages 3 to 4
    {
        cout << childName << " has been admitted to Pre-School." << endl;
    }
    else if (age >= 1 && age <= 2) // Third nested IF for ages 1 to 2
    {
        cout << childName << " has been admitted to Play Group." << endl;
    }
    else if (age == 0) // Fourth nested IF for age 0
    {
        cout << childName << " has been rejected." << endl;
    }
    else 
    {
        cout << "Invalid age." << endl; // If age is invalid (negative)
    }

    return 0;
}
