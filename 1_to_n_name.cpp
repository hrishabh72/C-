#include<iostream>
using namespace std;
 void f(string s,int n){

   if(n<1)
   return;
//    cout<<"Hrishabh"<<endl;
   cout<<s<<endl;
   f(s,n-1);
 }
int main()
{
 int n;
 cin>>n;
string s;
cin>>s;
 f(s,n);

}