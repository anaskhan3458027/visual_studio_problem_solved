//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    long long seriesSum(int n) {
        
      long long l = n ;
        return (l*(l+1))/2;
    }
 
};


//{ Driver Code Starts.

int main(){
    
        
        int n;
        scanf("%d",&n);
        
        Solution obj;
        long long res = obj.seriesSum(n);
        
        cout<<res<<endl;
        
    
}

// } Driver Code Ends