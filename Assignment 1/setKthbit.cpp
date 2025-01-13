#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cout<<"enter the Kth and N value "<<endl;
    cin>>n>>k;
    //1<<k it will shift one in left direction so 1 become if k is 2 then 1<<k = 100
    int mask = 1<<k;
    //n|mask this will make 
    int ans = n | mask;
    cout<<"the Ans is "<<ans<<endl;
    return 0;

    
}