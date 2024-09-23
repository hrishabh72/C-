#include<ostream>
using namespace std;
int add(int a, int b)
{
    int c;
    c=a+b;
    return c;

}
int main()
{
    int sum1=10,sum2=15,sum;
    sum=add(sum1,sum2);
    cout<<"sum is "<<sum<<endl;
    return 0;
}