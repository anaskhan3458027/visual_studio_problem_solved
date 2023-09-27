#include <iostream>
using namespace std;
int main()
{
    int ans = 0,  digit;
    int num;
    cin >> num;
    while (num != 0)
    {
        digit = (num % 10);
        if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10)){       
            return 0;
        }
        ans = (ans * 10) + digit;
        num = num / 10;
    }
    cout << ans;
}