#include <iostream>
using namespace std;
int main()
{
    int i=2, sum = 0,n=8;

    while (i <= n)
    {
        if (i % 2 == 0)
            sum = sum + i;
        i++;
    }
    cout << sum;
    return 0;
}