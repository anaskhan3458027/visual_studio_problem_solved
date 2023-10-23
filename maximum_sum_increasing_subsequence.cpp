#include <bits/stdc++.h>
using namespace std;
class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	   int ans=0;
	    vector<int> dp(n);
	    for(int i=n-1;i>=0;i--){
	        int s=0;
	        for(int j=i+1;j<n;j++){
	            if(arr[j]>arr[i])
	            s=max(s,dp[j]);
	        }
	        dp[i]=arr[i]+s;
	        ans=max(ans, dp[i]);
	    }
	    return ans;
	}  
};
int main() 
{
   	
   
   	  int n;
        cout<<"enter size:";
        cin >> n;

        int a[n];
        cout<<"enter the array:";
        for(int i = 0; i < n; i++)
        	cin >> a[i];
        Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    return 0;
}