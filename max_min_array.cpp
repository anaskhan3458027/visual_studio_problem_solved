#include <iostream>
using namespace std;
int main()
{
    int i, a[20], n,sum;
    cout << endl
         << "enter array size=";
    cin >> n;
    cout << endl
         << "enter array=" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max = INT_MIN;
    int min = INT_MAX;
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if(a[i] < min)
        {
            min = a[i];
        }
    }
cout<<max<<endl;
cout<<min<<endl;
 sum=max + min;
 cout<<sum;
return 0;
}