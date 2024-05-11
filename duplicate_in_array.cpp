#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        sort(arr,arr+n);
        vector<int> a;
        int b=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==arr[i+1]){
                a.push_back(arr[i]);
                b++;
            }
        }
        set<int> c(a.begin(),a.end());
        vector<int> d(c.begin(),c.end());
            if(b!=0)
                return d;
            else
                return {-1};   
    }
};
int main() {
    
        int n;
        cout<<"enter size of array:";
        cin >> n;
        long long a[n];
        cout<<"enter array:";
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    
    return 0;
}

