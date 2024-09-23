#include<iostream>
using namespace std;
void trace(int n){
    if(n==0)
    {
        return;
    }
    trace(n-1);
    cout<<n<<" ";
}
int main()
{
  int n;
  cin>>n;
  trace(n);

  return 0;
}