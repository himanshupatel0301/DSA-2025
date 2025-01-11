#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter the Binary number "<<endl;
    int deci = 0;
    int i = 0;
    cin>>n;
    while(n>0)
    {
    int rem = n % 10;
    deci = deci + rem*pow(2,i++);
    n = n/10;
    }
    cout<<deci;

}
