#include<iostream>
using namespace std;
int main()
{
    int temp = 0;
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        arr[i]= temp;
        temp++;
    }
    for(int j = 0 ; j <n ; j ++){
        cout<<arr[j]<<"\t\t\t\n";
    }
    cout<<endl<<arr[9];
 return 0;
}