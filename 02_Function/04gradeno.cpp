#include<iostream>
using namespace std;
char gradecal(int marks)
{
    if(marks<60)
    {
        return 'E';
    }
    else if(marks>60 && marks <70)
    {
        return 'D';

    }
    else if(marks >70 && marks<80)
    {
        return 'C';

    }
    else if(marks>80 && marks<90)
    {
        return 'B';
    }
    else if(marks>90 && marks<100){
        return 'A';
    }

}
int main()
{
    int marks;
    cout<<"Enter the marks you obtained"<<endl;
    cin>>marks;
    char grade = gradecal(marks);
    cout<<"The grade of Student is "<<grade<<endl;

}