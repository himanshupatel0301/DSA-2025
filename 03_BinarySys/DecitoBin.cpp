#include<iostream>
#include<cmath>
using namespace std;
int main()
{

    int n;
    int binaryno = 0;
    cout<<"Enter the Decimal number"<<endl;
    cin>>n;
    int i = 0;
    //decimal method
    /*
    while(n>0)
    {
        int rem = n % 2;
        binaryno = binaryno + rem*pow(10,i++);
        n = n/2;

    }
    cout<<binaryno;
    */
    while(n>0){

        int rem = n&1;
        binaryno = binaryno + rem*pow(10,i++);
        n = n>>1;
    }
cout<<binaryno;

}