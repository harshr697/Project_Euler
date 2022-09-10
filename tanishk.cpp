#include<iostream>
using namespace std;
void Sqr(int *x)
{
    *x=(*x)*(*x);
}
int main()
{
    int x;
    cin>>x;
    Sqr(&x);
    cout<<"SQUARE:"<<x;
}