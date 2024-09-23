#include<iostream>
#include<string>
#include<algorithm>
 using namespace std;
 int main()
 {
    string str="47584213";
    sort(str.begin(),str.end(),greater<int>());
     cout<< str <<endl;
 } 