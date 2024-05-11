#include <iostream>
using namespace std;
int f(int n)
{

   if (n == 1)
   {
      return 1;
   }
   else if (n == 0)
   {
      return 0;
   }
   else
   {
      return f(n - 1) + f(n - 2);
   }
}
void printFibonacciSeries(int n)
{
   cout << "Fibonacci Series: ";
   for (int i = 0; i < n; ++i)
   {
      cout << f(i) << " ";
   }
   cout << endl;
}
int main()
{
   int n;
   cin >> n;
   printFibonacciSeries(n);
   cout << f(n);
   return 0;
}