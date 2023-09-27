#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i =0;
    while(i<=n){
        int space =n-i;
        while(space){
            cout<<"_";
            space--;
        }
        int j = 0;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}