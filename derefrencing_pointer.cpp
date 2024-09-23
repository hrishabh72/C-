//derefrencing of the pointer.
#include<iostream>
using namespace std;
int main()
{
int score{100};
int *score_ptr{&score};
cout<<*score_ptr<<endl;
*score_ptr=200;
cout<<score<<endl;
cout<<*score_ptr;

}