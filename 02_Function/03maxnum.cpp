#include<iostream>
using namespace std;
int maximumnum(int a,int b,int c)
{
    if(a>b && a>c)
    {
        return a;
    }
    else if(b>c)

    {
        return b;
    }
    else{
        return c;
    }
    }
int main()
{
    int a = 55,b = 6,c = 12;
    int maxnum = maximumnum(a,b,c);
    cout<<"The max of 'a' 'b' 'c' "<<maxnum<<endl;
}