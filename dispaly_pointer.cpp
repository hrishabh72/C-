#include<iostream>
#include<vector>
using namespace std;

void dispaly(vector<string> *v)
{
    for(auto str: *v)
      cout<<str<<" ";
    cout<<endl;
    (*v).at(0)="funny";
    v=nullptr;

}

int main()
{
    vector<string> stooges{"larry","moe","curly"};
    dispaly(&stooges);
}