#include<iostream>
using namespace std;

int main()
{
    int  n;
    cin>>n;
    int array[n];
    int max_sum= INT_FAST8_MIN;
    int currentsum=0;
    for (int i = 0; i <n; i++)
    {
        cin>>array[i];
        currentsum+=array[i];
        if (currentsum<0)
        {
            currentsum=0;
        }
        
       max_sum= max (max_sum,currentsum);
    }
    cout<<max_sum<<endl;
    
}