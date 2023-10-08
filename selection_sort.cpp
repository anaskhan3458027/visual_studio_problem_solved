#include <iostream>
using namespace std;
void selectionsort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }
        swap(arr[minindex], arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << "{" << arr[i] << "}"
             << "...";
    }
}

int main()
{
    int n;
    cout << "enter array length :";
    cin >> n;
    int arr[n + 1];
    cout << "enter array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selectionsort(arr, n);
}