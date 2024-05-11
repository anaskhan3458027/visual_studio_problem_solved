#include <bits/stdc++.h>
using namespace std;
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    int s = 0;
	    int e = S.length() - 1;
	    while(s <= e){
	        if(S[s] != S[e])
                return 0;
                s++;
                e--;
	    }
		return 1;
	
	}


};
int main() 
{
   	
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) <<"\t"<<"-----yes it is a palindrome";
        
    return 0;
}
