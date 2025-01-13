#include<iostream>
using namespace std;
int main(){
 const char* S[3]
        = { "" };


} 
 
 
 
 int romanToInt(string s) {
        int ans = 0,k;
        int I,V,X,L,C,D,M;
     for(int i = 0;i<s.length();i++)
        {
             k = s[i];
            if(k == I)
            ans = ans+1;
            else if(k == V)
            ans = ans+5;

            else if(k == X)
            ans = ans+10;

            else if(k == L)
            ans = ans+50;

            else if(k == C)
            ans = ans+100;

            else if(k == D)
            ans = ans+500;

            else if(k == M)
                        ans = ans+1000;


        }
        return k;
    }