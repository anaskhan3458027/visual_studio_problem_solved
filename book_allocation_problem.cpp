#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isValid(ll book[], ll n, ll sum, ll B) 
{
    
    if (n < B) 
        return false;
    else {
       
        ll cur = 0; 
        
        ll cnt = 1; 

        for (ll i = 0; i < n; i++) {
            cur += book[i];
           
            if (cur > sum) 
            {
                cnt++;
                cur = book[i];
              
                if (cnt > B) 
                    return false;
            }
        }
       
        if (cnt <= B) 
            return true;
    }
    return false;
}

int main()
{
        ll n;
    
        cout << "Enter number of books: ";
        cin >> n;
    
        ll book[n];
    
        cout << "Enter book pages: ";
        for (ll i = 0; i < n; i++)
            cin >> book[i];
    
        ll B;
    
        cout << "Enter number of students: ";
        cin >> B;
    
       
        ll st = *max_element(book, book + n); 
    
       
        ll end = accumulate(book, book + n, 0); 
        ll ans = INT_MAX;
    
        while (st <= end) {
           
            ll mid = st + (end - st) / 2; 
          
            if (isValid(book, n, mid, B)) 
            {
                ans = mid;
                end = mid - 1;
            }
            else
                st = mid + 1;
        }

        if (ans == INT_MAX) {
            cout << "Allocation not possible: ";
            cout << -1 << "\n";
        }
        else {
            cout << "Minimum number of pages: ";
            cout << ans << "\n";
        }
    return 0;
}
