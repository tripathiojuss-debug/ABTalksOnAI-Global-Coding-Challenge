#include<iostream>
using namespace std;
int main()
{
    int n,steps=0;
    cout<<"Enter a integer number : ";
    cin>>n;
    while(n>0)
    {
        if(n%2==0)
            n/=2;
        else
            n=n-1;
        steps+=1;
    }
    cout<<"Total steps taken to reduce number to zero are : "<<steps;
}