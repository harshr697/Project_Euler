//Largest palindrome which is a product of 2 3 digit numbers
#include<iostream>
using namespace std;
bool ispalindrome(int a)
{
    int b=a;
    int num=0;
    while(b>0)
    {
        num=(num*10)+(b%10);
        b=b/10;
    }
    if(num==a)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int largest_prime=0;
    int a=999;
    int b=0;
    int db=0;
    while (a>=100)
    {
        if(a%11==0)
        {
            b=999;
            db=1;
        }
        else
        {
            b=990;
            db=11;
        }
        while (b>=a)
        {
            if ((a*b)<=(largest_prime))
            {
                break;
            }
            if (ispalindrome(a*b))
            {
                largest_prime=a*b;
            }
            b=b-db;
        }
        a=a-1;
    }
    cout<<"Max:"<<largest_prime;
}
