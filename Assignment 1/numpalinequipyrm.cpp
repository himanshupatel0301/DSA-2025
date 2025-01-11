#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    int cond = n;
    // for(int i = 0 ; i < n ; i++)
    // {
    //     int s = 1;int m = i;
    //     for(int j = 0;j<2*n-2*i - 1;j++)
    //     {
    //         cout<<" ";
    //     }
    //     for(int k = 0;k<2*i+1;k++)
    //     {
    //         if(k%2 == 0)
    //         {
    //         cout<<s;
    //         s = s+1;
    //         }
    //         else
    //         {
    //             cout<<" ";
    //         }
    //     }
      
    //     for(int l = 0;l<2*i;l++)
    //     {
    //         if(l %2 != 0){
    //         cout<<m;
    //         m = m-1;
    //         }
    //         else
    //         {
    //         cout<<" ";
    //         }
    //     }


        //method 2

        for(int i = 0;i < n;i++)
        {

          int c= 1;
            for(int j = 0;j<cond;j++)
            {
               
                if(j<n-i-1)
                {
                    cout<<" ";
                }
                else if(j<n)
                {
                cout<<c++;   
                } 
                else if(j == n)
                {
                    c = c-2;
                    cout<<c;
                    c--;
                }
                else{
                    cout<<c;
                    c--;
                }
            }
            cond++;
            cout<<endl;
        }
       
       
        
   

  
}