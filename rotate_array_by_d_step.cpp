
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void rotateArr(int arr[], int d, int n)
    {
        int temp[n];
        int mod = d % n;
        for (int i = 0; i < n; i++)
        {
            temp[i] = arr[(mod + i) % n];
        }

        for (int i = 0; i < n; i++)
        {
            arr[i] = temp[i];
        }
    }
};
int main()
{

    int n, d;

    cin >> n >> d;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Solution ob;

    ob.rotateArr(arr, d, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}