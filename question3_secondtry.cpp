#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int modofdouble(string a, int b)
{
    int mod=0;
    for(int i=0;i<a.length();i++)
    {
        mod=(mod*10+(int(a[i])-'0'))%b;
    }
    return mod;
}
int isprime(long long num,string a)
{
    for(int i=2;i<=sqrt(num);i++)
    {
        if(modofdouble(a,i)==0)
        {
            return 0;
        }
    }
    return 1;
}
long long largestprime(long long num,string a)
{
    
    if(isprime(num,a)==1)
    {
        return num;
    }

    for(double i=2;i<=sqrt(num);i++)
    {
        if(modofdouble(a,i)==0)
        {
            num=num/i;
            string b=to_string(num);
            return largestprime(num,b);
            break;
        }
    }
    return num;
}
int main()
{
    long long num=600851475143;
    string b=to_string(num);
    long long largest_prime=largestprime(num,b);
    cout<<"Largest Prime:"<<largest_prime;
}