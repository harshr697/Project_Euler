#include<iostream>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int l=0;
    int r=a.length();
    while(l<r)
    {
        if(a[l]=='0')
        {
            l++;
        }
        else if(a[l]=='1' && a[r]=='0')
        {
            char temp;
            temp=a[l];
            a[l]=a[r];
            a[r]=temp;
            l++;
            r--;
        }
        else {
            r--;
        }
    }
    cout<<"Arranged:"<<a;
}