#include<iostream>
using namespace std;
  void update(int arr[], int n){
    arr[0]=20;
        for(int i=0; i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
int main()
{ 
       
    int arr[3]={1,2,3};
    update(arr ,3);
    cout<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}