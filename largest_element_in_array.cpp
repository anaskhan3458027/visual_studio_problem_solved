
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        sort(arr.begin(), arr.end());
        return arr.at(n-1);
    }
};



int main()
{
   
        int n;
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.largest(arr, n) << "\n";
    
    return 0;
}

// } Driver Code Ends