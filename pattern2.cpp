#include <iostream>
using namespace std;
int main()
{
   int n, i, j;
   cout << "enter the row number= ";
   cin >> n;
   for (i = 0; i < n; i++)
   {
      for (j = 0; j <= i; j++)
      {
         cout <<"\t" "*";
      }
      cout <<endl;
   }
   for (i = n; i > 0; i--)
   {
      for (j = i-1; j >0; j--)
      {
         cout <<"\t" "*";
      }
      cout <<endl;
   }
   return 0;

}



