//Largest palindrome which is a product of 2 3 digit numbers
#include<iostream>
#include<string>
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
    int a=1001;
    int max=0;
    for(int i=100;i<1000;i++)
    {
        for(int j=100;j<1000;j++)
        {
            int chk=i*j;
            if(ispalindrome(chk)==1)
            {
                if(chk > max)
                {
                    max=chk;
                }
            }
        }
    }
    cout<<"Max: "<<max;
}