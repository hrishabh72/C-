#include <iostream>
using namespace std;

int linearsearch(int array[],int n, int key)
{
    for (int i = 0; i <n; i++)
    {
        if (array[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main(){
    int array[10]={15,45,28,79,63,45,95,68,74,2};
    cout<<"array to search is"<<endl;
    int key;
    cin>>key;
    bool found = linearsearch(array,10,key);
    if (found)
    {
       cout<<"key is present"<<endl;
    }
    else{
        cout<<"absent";
    }
    
}