#include<iostream>
using namespace std;

int main()
{
    int bef=0,aft=2,fib=0,limit,result=0;
    cin>>limit;
    while(fib<limit)
    {
        result+=fib;
        fib=(4*bef)+aft;
        aft=bef;
        bef=fib;
    }
    cout<<"\nResult"<<result<<endl;
}