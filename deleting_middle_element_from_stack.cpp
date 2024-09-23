#include<iostream>
#include<stack>
using namespace std;
void stacks(stack<int> &s,int k){
   if(s.empty()){
    s.pop();
    return;
   }
   int temp = s.top();
   s.pop();
   stacks(s,k-1);
   s.push(temp);
  return;
}
int main()
{

}