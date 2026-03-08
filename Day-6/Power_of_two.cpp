#include<iostream>
using namespace std;
bool power_of_two(int n)
{
    if(n==1)
    return true;
    if(n<=0)
    {
        return false;
    }
    while(n%2==0)
    {
        n/=2;
    }
    if(n==1)
    return true;
    return false;
}
int main()
{
    int n;
    cout<<"Input a number : ";
    cin>>n;
    if(power_of_two(n))
    {
        cout<<"YES";
    }
    else
    {
         cout<<"NO";
    }

}