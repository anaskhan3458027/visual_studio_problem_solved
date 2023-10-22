#include<iostream>
using namespace std;
void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
        int i=0, j=0;
        int k = 0;
        while(i<n && j<m){
            if(arr1[i]<arr2[j]){
                arr3[k++]=arr1[i++];
            }
            else{
                arr3[k++] = arr2[j++];
            }  
        }
        while(i<n){
            arr3[k++] = arr1[i++];
        }
        while(j<m){
            arr3[k++] = arr2[j++];
        }
}        
void print(int ans[], int n){
    for(int i = 0 ; i < n ; i ++){
        cout<<ans[i]<<" ";
    }

}
int main()
{
    int arr1[5] = {11,12,13,14,15};
    int arr2[3] = {26,27,28};
    int arr3[8];
    merge(arr1, 5, arr2, 3, arr3);
    print(arr3,8);

 return 0;
}