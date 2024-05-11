#include<iostream>
using namespace std;
int main()
{
    char name[20];
    int count=0;
    cout<<"enter character:";
    cin>>name;
    for(int i = 0; name[i]!='\0'; i++){
        count++;
    }
    cout<<count;
 return 0;
}