#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    if(n<=3)cout<<"-1"<<endl;
	    else
	    cout<<3*n-3<<endl;
	    
	}
	return 0;
}
