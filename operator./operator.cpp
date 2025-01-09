#include<iostream>
using namespace std;
int main()
{
bool a = false;
bool b = false;

cout<<"AND "<<(a&b)<<endl;
cout<<"OR "<<(a|b)<<endl;
cout<<"NOT "<<(a^b)<<endl;
cout<<"XOR "<<~(a)<<endl;
}