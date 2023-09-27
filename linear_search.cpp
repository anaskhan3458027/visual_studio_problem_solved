#include<iostream>
using namespace std;
bool search(int arr[] ,int size ,int key){
    for(int i=0;i<size;i++){
        if (arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[10] = {5,6,7,8,9,10,-2,-3};
    int key = -2;
    bool f = search(arr , 10 ,key);
    if(f){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
 return 0;
}