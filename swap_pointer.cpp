#include<iostream>
#include<vector>
using namespace std;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int x{100},y{200};
    cout<<"x "<<x<<endl;
    cout<<"y "<<y<<endl;
     swap(&x,&y);

    cout<<"x "<<x<<endl;
    cout<<"y "<<y<<endl;

}