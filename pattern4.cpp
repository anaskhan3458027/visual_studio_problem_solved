#include <iostream>
using namespace std;
int main()
{
   int n, i, j,count=0;
   cout << "enter the row number= ";
   cin >> n;
   for (i = 0; i < n; i++)
   {
      for (j = 0; j < i; j++)
      {
         cout <<count;
      }
      count++;
      cout <<endl;
   }
   return 0;
}