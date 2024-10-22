#include <iostream>
using namespace std;

void myFunction()
{
    //function code block
    //local variable declarations and initialization
    int locallVar = 30;
    const int age = 25; //Constant local variable.
    cout << "myFunction local variable="<< locallVar<< endl;
}
int main()
{
     // Function code block
     //Local variable declaration and initilization
     int locallVar = 31;
     const int age = 25;
     cout << "main local variable =" << locallVar<<endl;
     myFunction();

}
