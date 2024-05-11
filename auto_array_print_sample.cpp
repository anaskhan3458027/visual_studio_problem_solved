#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int temp = 0;
    int n;
    cout<<"enter length of array";
    cin>>n;
    int arr[n];
  /*  for(int i = 0 ; i < n ; i++){
        arr[i]= temp;
        temp++;
    }*/
    for(int j = 0 ; j <n ; j ++){
        cout<<arr[j];
    }
getch();
}