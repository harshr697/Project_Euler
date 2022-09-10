//By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
#include<iostream>
using namespace std;
int main()
{
    int bef=0,aft=1,fib=0,n;
    cin>>n;
    cout<<bef<<endl;
    fib=bef+aft;
    int sum=0;
    while(aft<n)
    {
        if(aft%2==0)
        {
            sum+=aft;
        }
        cout<<aft<<endl;
        fib=bef+aft;
        bef=aft;
        aft=fib;
    }
    cout<<"Sum:"<<sum;
}
