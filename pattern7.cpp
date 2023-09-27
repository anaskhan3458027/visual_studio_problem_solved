#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=0;row<=n;row++)
    {
        char start = 'A'+row;
        for(int col=0;col<=n;col++)
        {
        cout<<start;
        start++;
        }
    cout<<endl;
    }
 return 0;
}