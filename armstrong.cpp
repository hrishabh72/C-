#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0, last_digit;
    int originaln = n;
    while (n > 0)
    {
        last_digit = n % 10;
        sum += pow(last_digit, 3);
        n = n / 10;
    }

    if (sum == originaln)
    {

        cout << "armstrong number" << endl;
    }
    else
    {
        cout << "not an armstrong number" << endl;
    }
}