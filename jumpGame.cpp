#include <bits/stdc++.h>
using namespace std;

bool canJump(vector<int> &nums)
{
    int index = nums.size() - 1;
    for (int i = nums.size() - 2; i >= 0; i--)
    {
        if (nums[i] + i >= index)
            index = i;
    }
    if (index == 0)
        return true;
    return false;
}