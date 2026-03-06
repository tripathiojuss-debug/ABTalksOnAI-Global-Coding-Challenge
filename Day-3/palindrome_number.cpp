#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(num < 0)
    {
        cout << "Negative numbers can't be palindrome." << endl;
        return 0;
    }

    int original = num;
    int reversed = 0;

    while(num > 0)
    {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    if(original == reversed)
        cout << "The number is a Palindrome." << endl;
    else
        cout << "The number is NOT a Palindrome." << endl;

    return 0;
}
