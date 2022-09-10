#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    string b;
    cout<<"A:";
    cin>>a;
    cout<<"B:";
    cin>>b;
    int n=0,d=0;
    if(a.size()>b.size())
    {
        n=a.size();
        d=n-(b.size());
    }
    else
    {
        n=b.size();
        d=n-(a.size());
    }
    char c[n];
    char da[d];
    int k=0;
    for(k;k<d;k++)
    {
        da[k]='0';
    }
    da[k]='\0';
    b=da+b;
    
    for (int i=0;i<n-2;i++)
    {
        c[i]='0';
    }
    //int count=0;
    int carry=0;
    for(int i=n-1;i>=0;i--)
    {
        int x=a[i]+b[i]-2*'0';
        x=x+carry;
        if(x>9)
        {
            carry=x/10;
            x=x%10;
        }
        else
        {
            carry=0;
        }
        c[i]=x+'0';
        
    }
    c[n]='\0';
    if(carry==0)
    {
        cout<<"Sum:"<<c;
        return 0;
    }
    cout<<carry;
    cout<<c;
    return 0;
}