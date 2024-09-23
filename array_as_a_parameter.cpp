#include<iostream>
using namespace std;
void fun(int *a,int n)   //we can use * at the place of [], it will treat it as a array.
{
    // cout<<sizeof(a)/sizeof(int)<<endl;  //8/4=2.
    // for(int i=0; i<=n;i++)
    // cout<<a[i]<<endl;
    a[0]=15;   //value will be changed in the array.
}
int main()
{
 int a[]={2,4,6,8,10};
 int n=5;
 fun(a,n);
    // cout<<sizeof(a)/sizeof(int)<<endl;  //5.

 for(int x:a)
 cout<<x<<" ";

 return 0;
}