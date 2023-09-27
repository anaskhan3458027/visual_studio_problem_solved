#include <iostream>
using namespace std;
int main()
{
    int i, arr[20], n, sum, j;
    cout << endl
         << "enter array size=";
    cin >> n;
    cout << endl
         << "enter array=" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = INT_MIN;
    int min = INT_MAX;
    while (n)
    {
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << min << " ";
    min = 0;
}
return 0;
}