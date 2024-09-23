#include <iostream>
using namespace std;
void sort012(int a[], int n)
{
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (a[mid] == 0)
        {
            swap(a[low], a[mid]);
            low++;
            mid++;
        }
        else if (a[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(a[mid], a[high]);
            high--;
        }
    }
}
int main()
{
    int a[] = {0, 2, 1, 2, 0};
    sort012(a, 5);

    for (int x : a)
        cout << x << " ";
    return 0;
}