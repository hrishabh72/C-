#include<iostream>
using namespace std;
int main()
{
    int n;
   cin>>n;
    int array[n];
       for (int i : array)
       {
            cin>>array[i]; 
       }

       for (int i = 0; i < n; i++)
       {
        cout<<array[i]<<" ";
       }
       
       
}