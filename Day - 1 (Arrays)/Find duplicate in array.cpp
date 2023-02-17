#include <bits/stdc++.h>
using namespace std;
// Yash Vardhan Shankhdhar

int findDuplicate(vector<int> &nums)
{
    int fast = nums[0], slow = nums[0];

    do
    {
        fast = nums[nums[fast]];
        slow = nums[slow];
    } while (slow != fast);
    slow = nums[0];

    while (fast != slow)
    {
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}
