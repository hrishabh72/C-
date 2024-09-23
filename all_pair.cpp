#include<iostream>
#include<string.h>
#include<vector>
using namespace  std;

 int allpair(int arr[],size_t size)
 {
    for (size_t i{0}; i < size; ++i)
    {
        for (size_t j{0};  j< size; ++j)
        {
            cout<<"["<<arr[i]<<arr[j]<<"]"<<endl;
        }
        
    }
    
 }

 int main()
 {
    int arr[]={1,2,3,4,5,6};
    allpair(arr,6);
    return 0;
 }