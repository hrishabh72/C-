#include <iostream>
using namespace std;
void printarray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i]<<" ";
    }
}

void alternate_swap(int array[], int size){
    for (int i = 0; i < size; i+=2)
    {
      if (i+1 < size)
      {
        swap(array[i], array[i+1]);
      }
      
    }
    
}
int main()
{
    int even[8]={25,14,87,9,5,6,29,4};
    int odd[5]={5,4,8,9,7};

    alternate_swap(even,8);
    printarray(even,8);

     cout<<endl;

     alternate_swap(odd,5);
    printarray(odd,5);
}