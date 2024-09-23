#include <iostream>
using namespace std;
void fibb(int n)
{
    int t1 = 0, t2 = 1, next_term;
    for (int i = 1; i <= n; i++)
    {
        cout<<t1<<endl;
        next_term = t1 + t2;
        t1 = t2;
        t2 = next_term;
    }
    return;
}
int main()
{
    int n;
    cin >> n;
    fibb(n);
    return 0;
}