#include <bits/stdc++.h>
#define int long long
using namespace std;
int B[3], K;
void solve()
{
    K = 0;
    cin >> B[0] >> B[1] >> B[2];
    for (int i = 0; i < 3; ++i)
        if (B[i] != 0)
        {
            B[i]--;
            K++;
        }
    for (int i = 0; i < 3; ++i)
        for (int j = i + 1; j < 3; ++j)
            if (B[i] > B[j])
                swap(B[i], B[j]);
    if (B[0] >= 2)
    {
        cout << K + 3 << endl;
        return;
    }
    if (B[0] == 1)
    {
        cout << (B[2] >= 2 ? K + 2 : K + 1) << endl;
        return;
    }
    cout << (B[1] == 0 ? K : K + 1) << endl;
}
signed main()
{
    int GOPI;
    cin >> GOPI;
    while (GOPI--)
        solve();
}