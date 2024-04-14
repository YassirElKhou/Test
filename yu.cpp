
#include<iostream>

using namespace std;

int GCD(int x, int y)
{
    while(x!=y)
    {
        if(x>y)
        {
            x-=y;
        }
        else
        {
            y-=x;
        }
    }
    return x;
}
int LCD(int a, int b)
{
    (a*b)/GCD(a,b);
    return (a*b)/GCD(a,b);
}
bool arePositive(int h, int j)
{
    h>0 && j>0;
    return h>0 && j>0;
}
int main()
{
    int x,y;
    cout<<"enter a positive integer"<<endl;
    cin>>x;
    cout<<"enter another positive integer"<<endl;
    cin>>y;

    if(arePositive(x,y)==true)
    {
        GCD(x, y);
        int gcdresult=GCD(x,y);
        cout<<"The greatest common divisor is :"<<gcdresult<<endl;
        LCD(x, y);
        int lcdresult=LCD(x,y);
        cout<<"The least common divisor is :"<<lcdresult<<endl;
    }
    else
    {
        cout<<"invalid input"<<endl;
    }
    return 0;

}



