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
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min= arr[i];
        }
        if(i=1){
            swap(min , arr[i]);
        }
    }
    for(i=0;i<n;i++)
    cout<<arr[i];
    return 0;
}
