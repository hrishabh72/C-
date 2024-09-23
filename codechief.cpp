#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,z,count,x1,y1,z1;
	
	cin >> t;
	while(t--){
	    count = 0;
	    cin >> x1 >> y1 >> z1;
	    x = max (max(x1,y1), max(y1,z1));
	    z = min (min(x1,y1), min(y1,z1));
	    y = x1 + y1 + z1 - x - z;
	    
	        
	    if(x-- > 0) count++;
	    if(y-- > 0) count++;
	    if(z-- > 0) count++;
	    
	    if(x-- > 0 && y-- > 0)  count++;
	    if(y-- > 0 && z-- > 0)  count++;
	    if(x-- > 0 && z-- > 0)   count++;
	    
	    cout << count << endl;
	    
	}
	return 0;
}
