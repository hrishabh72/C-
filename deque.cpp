#include<iostream>
#include<deque>   //learning about deque.
using namespace std;

int main()
{
    deque<int> n;
  

    cout<<"size of deque is "<< n.size() <<endl;

    n.push_front(20);
    n.push_back(30);
    cout<<"size of deque is "<< n.size() <<endl;
    cout<<n.front()<<endl;  //shows the first element.
    cout<<n.back()<<endl;  //shows the last element.
  cout << "\n n.pop_front() : "<<endl;
   n.pop_front(); // this statement takes out the first element.
    cout<<n.front()<<endl; 
    return 0;

}