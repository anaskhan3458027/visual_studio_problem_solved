#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
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
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

