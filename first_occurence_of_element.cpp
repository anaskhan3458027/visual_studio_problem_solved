#include <iostream>
using namespace std;
int first_occurence_serach(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid -1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }
    return ans;
}
int main()
{
    int n, key, arr[10];
    cout << "enter array length :";
    cin >> n;
    cout << "enter sorted array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter key:";
    cin >> key;
    cout<<first_occurence_serach(arr, n, key);
}