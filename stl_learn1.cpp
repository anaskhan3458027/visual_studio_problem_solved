#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v(5 , 100);
  v.insert(v.begin() + 5,2 , -1);
  v.erase(v.begin()+ 4);
    for(auto i : v){
        cout<<i<<" ";
    }
 return 0;
}