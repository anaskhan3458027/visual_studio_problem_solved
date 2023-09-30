#include <iostream>
using namespace std;
int peak_element_serach(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    
   
    while (start < end)
    {   int mid = (start + end) / 2;
        if (arr[mid] < arr[mid+1])
        {
            
            start = mid + 1;
        }
        else 
        {
            end = mid ;
        }
        
    }
    return arr[start];
}
int main()
{
    int n, key, arr[10];
    cout << "enter array length :";
    cin >> n;
    cout << "enter  array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"peak element is = "<<peak_element_serach(arr, n);
    return 0;
}