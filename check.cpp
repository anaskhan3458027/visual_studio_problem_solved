#include <iostream>
using namespace std;
int reverse(int arr[], int n)
{
    int start = 0, end =  1;

    
    while ( end=n) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[start] = temp;
        start += 2;
        end += 2;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "(" << arr[i] << ")";
    }
    return 0;
}
int main()
{
    int n, arr[100];
    cout << "enter size of array:";
    cin >> n;
    cout << "enter array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverse(arr, n);
}