#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    if(cin.fail() || n <= 0)
    {
        cout << "Invalid input!" << endl;
        return 0;
    }

    vector<int> arr(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(cin.fail())
        {
            cout << "Invalid input! Please enter integers only." << endl;
            return 0;
        }
    }

    vector<int> running_sum(n);

    running_sum[0] = arr[0];

    for(int i = 1; i < n; i++)
    {
        running_sum[i] = running_sum[i-1] + arr[i];
    }

    cout << "Running Sum: ";
    for(int i = 0; i < n; i++)
    {
        cout << running_sum[i] << " ";
    }

    return 0;
}