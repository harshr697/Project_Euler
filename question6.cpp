//Find the difference between the sum of the squares 
//of the first one hundred natural numbers and the square of the sum.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long sumofsquares;
    long squareofsum;
    long n;
    cin>>n;
    sumofsquares=(n*(n+1)*((2*n)+1))/6;
    squareofsum=(n*(n+1))/2;
    squareofsum=squareofsum*squareofsum;
    cout<<squareofsum-sumofsquares<<endl;

}