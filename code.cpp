

   #include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
     int n;
    int counter=0;
    
    for(int i=0; i<t;i++)
    {
        cin>>n;
        int arr[n]; 
        for (int j = 0; j < n; j++)
        {
            cin>>arr[n];
        }


        for (int j = 0; j < n; j++)
        {
            if (arr[j]==0)
            {
                counter=0;
                goto a;
            }
            else if (arr[j]<0)
            {
                counter++;
            }   
        }
        cout<<"|"<<counter<<"|";
        a:
        if (counter%2==0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
        counter=0;
    }
	return 0;
}
