#include <iostream>
using namespace std;
int unique(int arr[], int m)
{  
    int ans = 0 ;
    for(int i=0;i<m;i++){
        ans=ans^arr[i];
    }
    cout<<"unique number is :"<<ans;
    return 0;
}
int main()
{
    int m;
    int arr[100];
    cin >> m;
    for (int i = 0; i < m; i++)
        cin >> arr[i];
        unique(arr,m);
    return 0;
}