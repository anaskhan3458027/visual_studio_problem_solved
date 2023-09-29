#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        vector<int>ds;
        int index = 0;
        
        for(int i = 0; i < n ;i++)
        {
            if(arr[i]  < 0)
            {
                ds.push_back(arr[i]);
            }else{
                arr[index] =arr[i] ;
                index++;
            }
        }
        for(auto x :ds)
        {
            arr[index]=x ;
            index++;
        }
        
    }
};
int main() {
	cout<<"enter number of test case:";
	int t;
	cin>>t;
	while(t--)
	{
		int n;
        cout<<"enter size :";
		cin>>n;
		int a[n];
        cout<<"enter the array:"<<endl<<endl;
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}