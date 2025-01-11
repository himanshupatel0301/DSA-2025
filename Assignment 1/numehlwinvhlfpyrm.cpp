#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number "<<endl;
    cin>>n;
  
    if(n>0)
    {
        for(int i = 0; i < n ; i++)
        {
            int k = 1;
            for(int j = 0;j<2*n-2*i-1;j++)
            {
                
                if(i == 0)
                {
                    if(j%2 == 0)
                    {
                        
                        cout<<k;
                        k = k+1;
                    }
                    else
                    {
                        cout<<" ";
                    }
                }
                else
                if(j == 0)
                {
                    cout<<i+1;
                }
                else if(j == 2*n-2*i-2)
                {
                    cout<<5;

                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
}