#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        long ans=0;
        for(int i=1;i<=N;i++){
            ans+=i*(N/i);
        }
        return ans;
    }
};
int main()
{
int N;
cin >> N;
Solution ob;
long long ans = ob.sumOfDivisors(N);
cout << ans << endl;
return 0;
}
