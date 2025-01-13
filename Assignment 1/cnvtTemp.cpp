#include<iostream>
using namespace std;
int main()
{
    float cel ;
    float kelvien,fahrenheit;
    cout<<"Enter the Temperature in Celsius"<<endl;
    cin>>cel;
    kelvien = cel + 273.15;
    fahrenheit = cel*9/5 + 32.00;
    cout<<"The temperature in kelvien is "<<kelvien<<endl<<"The Temperature in fahrenheit is "<<fahrenheit<<endl;
 

}