#include<iostream>
using namespace std;
int main()
{
    cout<<"break"<<endl;

    for(int i = 0;i<5;i++)
    {
        cout<<i<<endl;
        break;
    }
    cout<<"continue"<<endl;
    for(int i = 0;i<5;i++)
    {
         continue;
        cout<<i<<endl;
       
    }
     cout<<"continue"<<endl;
    for(int i = 0;i<5;i++)
    {
       
        cout<<i<<endl;
         continue;
       
    }
    
}