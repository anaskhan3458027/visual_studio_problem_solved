#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
    vector<int> v(a, a + n);
        sort(v.begin(), v.end());
        return v.at(n-3); 
    }

};
int main()
{
    
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    
}   
