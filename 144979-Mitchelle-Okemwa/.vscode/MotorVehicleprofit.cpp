// Write a program that computes the profit made for selling a motor vehicle.
//The program should allow a user to input the buying price and selling price 
//Then compute and display the profit

#include <iostream>
using namespace std;
int main()
{
    float buyingPrice,sellingPrice,profit;
    cout<< "Enter the buyingPrice and sellingPrice respectively";
    cin >> buyingPrice >> sellingPrice ;
    profit = sellingPrice - buyingPrice;
    cout<< "The profit made for selling the motor vehicle" << profit << endl;

return 0;

}