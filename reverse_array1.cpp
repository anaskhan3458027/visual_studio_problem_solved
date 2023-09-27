#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n = 5, temp, start = 0, end = n - 1;
    char a[20];
    // int a[20];
    cout << "enter array=" << endl;
    for (i = 0; i < n; i++)
        cin >> a[i];

    while (start <= end)
    {
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
    for (i = 0; i < n; i++)
        cout << a[i];
    return 0;
}