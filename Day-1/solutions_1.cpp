#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<pair<int,int>> nums(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i].first;    
        nums[i].second = i;      
    }

    int target;
    cout << "Enter target value: ";
    cin >> target;


    sort(nums.begin(), nums.end());

    int left = 0, right = n - 1;

    while(left < right)
    {
        int sum = nums[left].first + nums[right].first;

        if(sum == target)
        {
            cout << "Result:" << endl;
            cout << "Index 1: " << nums[left].second << endl;
            cout << "Index 2: " << nums[right].second << endl;
            return 0;
        }
        else if(sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    cout << "No valid pair found." << endl;

    return 0;
}
