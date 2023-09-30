#include <iostream>
using namespace std;
int last_occurence_serach(int arr[], int n, int key)
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
            start = mid + 1;
        }
        else if (key > arr[mid])//right me jaayeneg
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
    first_occurence_serach(arr, n, key);
    last_occurence_serach(arr, n, key);
    cout<<"total number of occurence of"<<key<<"is :"<<last_occurence_serach(arr, n, key)-first_occurence_serach(arr, n, key)+1;
}