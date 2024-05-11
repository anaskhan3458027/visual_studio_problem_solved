//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<string> numberPattern(int N)
    {
        vector<int>p;
       for(int i=1;i<N; i++){
           for(int j=0; j<i; j++){
               cout<<i;
           }
           cout<<" ";
       }
       
    }
    
};

//{ Driver Code Starts.
int main()
{
    
        int N;
        cin>>N;
       
        Solution ob;
        vector<string> res = ob.numberPattern(N);
        for(int i = 0; i < res.size(); i++){
            cout << res[i] << " ";
        }
        cout << endl;
    
   
    return 0;
}
// } Driver Code Ends