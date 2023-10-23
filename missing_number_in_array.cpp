#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        int p = (n*(n+1))/2;
        int sum = 0;
         for(int i=0;i<n-1;i++){
                sum+= array[i];
         }
          return  p - sum;
    }
};

int main() {

        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    
    return 0;
}
