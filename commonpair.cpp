#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

// int compare_item(int arr1[],int arr2[]){
   
  
// }
bool common_of_all_pairs(int array1[],int array2[]) {
  for (int index = 0; index < sizeof(array1); index++) {
    for (int j = 0; j <sizeof(array2); j++) {
        if (array1[index]==array2[j]) {
            return true;
        }
        
    } 
  }
  return false;
 }

 int main()
 {
  int arr[]={1,4,6,7,2};
  int arr1[]={1,3,5,8,9};
  // int k =*(&arr + 1) - arr;
  // cout<<k;

  bool j=common_of_all_pairs(arr,arr1);
   std::cout << std::boolalpha;   
    std::cout<<j<<"\n";
  // cout<<bool(j)<<endl;
    
 }
