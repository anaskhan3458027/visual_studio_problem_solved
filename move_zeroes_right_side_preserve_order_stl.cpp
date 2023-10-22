#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int j = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};
/*int main() {
        int nums;
        cin >> nums;
        vector<int>& nums
        for (int i = 0; i < nums.size(); i++) {
            cin >> nums.push_back(i);
        }
        Solution ob;
        ob.moveZeroes(nums);
        for (int i = 0; i < nums.size(); i++) {
            cout << nums.push_back(i) << " ";
        }
        cout << "\n";

    return 0;
}*/
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    Solution ob;
    ob.moveZeroes(nums);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    cout << "\n";

    return 0;
}
