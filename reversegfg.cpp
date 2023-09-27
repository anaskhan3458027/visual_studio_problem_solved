#include<iostream>
using namespace std;
class Solution
{
    public:
    void reverseWord(string str)
    {
       int n = str.length()-1;
        while(n >= 0){
            cout << str[n]; 
            n--;
            }
    }
};
int main()
{
        string s;
        cin>>s;
        Solution ob;
        ob.reverseWord(s);  
    
    return 0;
}