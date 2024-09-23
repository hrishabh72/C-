#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int t, i, n, k;
	
    scanf("%d", &t);
    
    while(t--){
               string a, b, c;
               
               cin >> a >> b;
               
               a = a + b;
               
               sort(a.begin(), a.end());
		       
               cin >> n;
		
               for (i = 0; i < n; i++) {
                   cin >> b;
			       c += b;
		        }
		
                sort(c.begin(), c.end());
		        
                k = 0;
		        
                for (i = 0; i < a.length(); i++) {
                    if (a[i] == c[k]) {
                             k++;
                    }
                }
                    
                if (k == c.length())
                   cout<<"YES"<<endl;
                else
		cout<<"NO"<<endl;
	}
	
	return 0;
}