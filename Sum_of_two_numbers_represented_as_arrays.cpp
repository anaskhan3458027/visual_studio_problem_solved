#include <bits/stdc++.h>
using namespace std;
class Solution{
public:	
    vector<int> reverse(vector<int> &v){
            int i=0;
            int j=v.size()-1;
            while(i<j){
                swap(v[i],v[j]);
                i++;
                j--;
            }
        return v;
    }
	vector<int> findSum(vector<int> &a, vector<int> &b) {
	    int n = a.size();
	    int m = b.size();
	    int i = n-1;
	    int j = m-1;
	    vector<int>ans;
	    int carry = 0 ;
	    while(i>=0 && j>=0){
	        int val1= a[i];
	        int val2= b[j];
	        int sum = val1 + val2 + carry;
	        carry = sum/10;
	        sum = sum%10;
	        ans.push_back(sum);
	        i--;
	        j--;
	    }
	    while(i>=0){
	        int sum = a[i] + carry;
	        carry = sum/10;
	        sum = sum%10;
	        ans.push_back(sum);
	        i--;
	    }
	    while(j>=0){
	        int sum = b[j] + carry;
	        carry = sum/10;
	        sum = sum%10;
	        ans.push_back(sum);
	        j--;
	    }
	    while(carry!=0){
	        int sum = carry;
	        carry = sum/10;
	        sum = sum%10;
	        ans.push_back(sum);
	      }
	return reverse(ans);
	}
};

int main() {
   
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        Solution ob;
        auto ans = ob.findSum(a, b);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    return 0;
}
