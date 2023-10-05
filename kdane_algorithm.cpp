#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    long long maxSubarraySum(int arr[], int n){
        long long max=INT_MIN;
       long long currentsum=0;
       
       for(int i=0; i<n;i++){
           
           currentsum=currentsum+arr[i];
           
           if(currentsum >max){
               max=currentsum;
           }
           
           if(currentsum<0){
               
               currentsum=0;
           }
       }
       return max;
    }
};

int main()
{
    int t,n;
    cin>>t; 
    while(t--) 
    {
        cin>>n; 
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];    
        Solution ob;
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

