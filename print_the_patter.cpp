//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
void printPat(int n);

int main()
{
	
	int n;
	cin>>n;
    printPat(n);
    cout<<endl;
	
}
// } Driver Code Ends


/*You are required to complete this method*/
void printPat(int n)
{
    for(int i=n;i>0;i--){
        for(int j=n;j>0;j--){
            for(int k=0;k<i;k++){
                cout<<j<<' ';
            }
        }
        cout<<endl;
    }
}