#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vector1;
    vector <int> vector2;

    // add 10 and 20 to vector 1.
    vector1.push_back(10);
    vector1.push_back(20);

    cout<<vector1.at(0)<<endl;
    cout<<vector1.at(1)<<endl;

    cout<<vector1.size()<<endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout<<vector2.at(0)<<endl;
    cout<<vector2.at(1)<<endl;

    cout<<vector2.size()<<endl;


    vector <vector<int>> vector2d;

    // adding vector 1 to vector2d.

    vector2d.push_back(vector1);
    vector2d.push_back(vector2);

    cout<<vector2d.at(0).at(0)<<" "<<vector2d.at(0).at(1)<<endl;
    cout<<vector2d.at(1).at(0)<<" "<<vector2d.at(1).at(1)<<endl;

    // change vector1(0) to 1000.

    vector1.at(0)=1000;

    cout<<vector2d.at(0).at(0)<<" "<<vector2d.at(0).at(1)<<endl;
    cout<<vector2d.at(1).at(0)<<" "<<vector2d.at(1).at(1)<<endl;

    // dispaly the element of vector1.

    cout<<vector1.at(0)<<endl;
    cout<<vector1.at(1)<<endl;

    cout<<vector1.size()<<endl;











}