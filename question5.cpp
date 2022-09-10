#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int number)
{
    for(int i=2;i<=sqrt(number);i++)
    {
        if(number%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    
    int num=1;
    for(int i=2;i<=20;i++)
    {
        if(isprime(i)==1)
        {
            
            num=num*i;
           // cout<<i<<"  "<<num<<endl;


        }
        else
        {
            if(num%i!=0)
            {
                int rem=num%i;


                num=num*(i/rem);
            }
        }

    }
    cout<<"Min:"<<num;
}