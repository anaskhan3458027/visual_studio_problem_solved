#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int palindromicPartition(string str)
    {
        int n = str.length();
        vector<vector<bool>> isPalindrome(n, vector<bool>(n, false));

        for (int i = 0; i < n; i++) {
            isPalindrome[i][i] = true;
        }

        for (int len = 2; len <= n; len++) {
            for (int i = 0; i < n - len + 1; i++) {
                int j = i + len - 1;

                if (len == 2 && str[i] == str[j]) {
                    isPalindrome[i][j] = true;
                } else if (str[i] == str[j] && isPalindrome[i + 1][j - 1]) {
                    isPalindrome[i][j] = true;
                }
            }
        }

        vector<int> minCuts(n, INT_MAX);

        for (int i = 0; i < n; i++) {
            if (isPalindrome[0][i]) {
                minCuts[i] = 0;
            } else {
                for (int j = 0; j < i; j++) {
                    if (isPalindrome[j + 1][i]) {
                        minCuts[i] = min(minCuts[i], minCuts[j] + 1);
                    }
                }
            }
        }

        return minCuts[n - 1];
    }
};
int main(){

        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    
    return 0;
}
