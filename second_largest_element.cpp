#include <bits/stdc++.h>

using namespace std;


class Solution{
public:	
	
	int print2largest(int arr[], int n) {
	    if (n < 2) {
            return -1;  
        }

        vector<int> v(arr, arr + n);
        sort(v.begin(), v.end());

        int largest = v[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            if (v[i] < largest) {
                return v[i];
            }
        }

        return -1;
	    
	}
};



int main() {
    
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    
    return 0;
}

