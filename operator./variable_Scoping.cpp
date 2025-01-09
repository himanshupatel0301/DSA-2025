#include<iostream>
using namespace std;
int main()
{
    //variable scoping 
    int a = 5;
    cout<<"The value of 'a' is  "<<a<<endl;
    if((true))
    {
        //local scope 
        int a = 6;
        cout<<"The value of 'a' is  "<<a<<endl;

    }
    cout<<"The value of 'a' is "<<a<<endl;
}