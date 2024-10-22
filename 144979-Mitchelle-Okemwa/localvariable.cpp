#include <iostream>
using namespace std;

void myFunction()
{
    //function code block
    //local variable declarations and initialization
    int localVar = 30;
    const int age = 25; //Constant local variable.
    cout << "myFunction localVar"<< localVar;
}
int main()
{
     // Function code block
     //Local variable declaration and initilization
     int locallVar = 31;
     const int age = 25;
     cout << "main localVar =" << locallVar
     <<myFunction;

}

