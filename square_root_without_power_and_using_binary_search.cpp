#include <iostream>
using namespace std;
int binary_search(int arr[], int n, int root)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    int square = arr[mid*mid];
    int ans ;
    while (start <= end)
    {
        if (square == root)
        {
            return arr[mid];
        }
        if (square < root)
        {
            ans = arr[mid];
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }
    return ans;
}
int main()
{
    int n, root;
   
    cout << "enter root:";
    cin >> root;
    n = root;
    int arr[n];
    int temp = 0 ; 
    for (int i = 0; i <= root; i++)
    {
        arr[i] = temp;
        temp++;
    }
    cout<<binary_search(arr, n, root);
}