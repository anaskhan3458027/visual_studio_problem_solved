#include <iostream>
using namespace std;
void bubblesort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j + 1], arr[j]);
            }
        }
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
    bubblesort(arr, n);
}