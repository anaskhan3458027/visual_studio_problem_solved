#include <iostream>
using namespace std;
unique_occurrence(int arr[], int m)
{
    int j = 0; 
    while(j<=m){
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        if (arr[j] == arr[i])
        {
            count = count + 1;
        }
    }
    cout<<"count of "<<arr[j]<<"is= "<<count<<endl;
    j++;
    }
    return 0;
}

int main()
{
    int n;
    int arr[100];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    unique_occurrence(arr, n);
    return 0;
}