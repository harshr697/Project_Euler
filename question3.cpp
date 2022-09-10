//Largest prime factor
#include<iostream>
#include<cmath>
using namespace std;
int isprime(int num)
{
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int modofdouble(string a, int b)
{
    int mod=0;
    for(int i=0;i<a.length();i++)
    {
        mod=(mod*10+(int(a[i])-'0'))%b;
    }
    return mod;
}
int main()
{
    string num;
    num="600851475143";
    double num1=600851475143;
    double half=num1/2;
    double prime=0;
    // for(int i=2;i<38;i++)
    // {

    //     if(isprime(i)==1 && modofdouble(num,i)==0)
    //     {
    //         prime=i;
    //         num1=num1/i; 
    //     }
    // }
    int i=2;
    while(i<=sqrt(num1))
    {
        if(isprime(i)==1 && modofdouble(num,i)==0)
        {
            prime=i;
            num1=num1/i;
            
        }
        i=i+1;
    }
    cout<<"Prime:"<<prime;

}