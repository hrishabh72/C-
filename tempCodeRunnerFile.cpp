#include<iostream>
#include <stack>
using namespace std;
void stacks(stack<int> &s,int temp){
    
 if (s.size() == 0 || s[s.size() - 1] <= temp)
    {
        s.push(temp);
        return;
    }
    int val = s[s.size() - 1];
    s.pop();
    stacks(s, temp);
    s.push(val);
}
void sort(stack<int> &s)
{
    if (s.size() <= 1)
    {
        return;
    }
    int temp = s[s.size() - 1];
    s.pop();
    sort(s);
    stacks(s, temp);
}

int main()
{
    stack<int> s = {5,8,7,2,1,3};
    sort(s);
    for(auto i :s)
    cout<<i<<" ";
    return 0;
}
