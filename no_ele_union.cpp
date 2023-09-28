//{ Driver Code Starts
//Initial template for C++
#include<iostream>
#include<set>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {

        set<int>s;
        for(int i = 0; i < n; i++){
            s.insert(a[i]);
        }
        for(int j = 0; j < m; j++){
            s.insert(b[j]);
        }
        return s.size();
    }
};

//{ Driver Code Starts.

int main() {
    int t;
	cout<<"t :";
	cin >> t;
	
	while(t--){
	    
	    int n, m;
        cout<<"n : ";
	    cin >> n;
        cout<<"m : ";
        cin >> m;
	    int a[n], b[m];
	    cout<<"enter a: ";
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	    cout<<"enter b: ";  
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends