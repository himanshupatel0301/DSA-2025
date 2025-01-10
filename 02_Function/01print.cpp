//pass by value   value creates a copy only

#include<iostream>
using namespace std;
void num(int a)
{
    cout<<a<<endl;
}


int main()
{
    int a = 5; 
     num(a);
}