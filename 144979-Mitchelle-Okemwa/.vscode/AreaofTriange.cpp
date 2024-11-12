#include <iostream>
using namespace std;
int main()
{
    float area,perimeter,base,height,hypotenuse;
    cout<< "Enter the base,height and hypotenuse respectively"
    cin >> base >> height >> hypotenuse;
    area = 0.5 * base * height;
    perimeter = base +height + hypotenuse;
     cout<< "The are of the trainge is" << area << endl;

}