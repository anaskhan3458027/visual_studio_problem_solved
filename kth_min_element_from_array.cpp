#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int kthSmallest(int arr[], int l, int r, int k) {
        vector<int>v;
        for(int i = l; i <= r; i++){
            v.push_back(arr[i]);
        }
        sort(v.begin(), v.end());
        return v.at(k-1);
    }
};
 int main()
{
    int test_case;
    cout<<"how many test case:";
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cout<<"enter number_of_elements:";
        cin>>number_of_elements;
        int a[number_of_elements];
        cout<<"enter array:"<<endl;
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cout<<"enter kth element:";
        cin>>k;
        Solution ob;
        cout<<endl<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}
