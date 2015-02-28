#include <iostream>
using namespace std;

int main()
{
	unsigned int n, k, count = 0, i=0;
	cin >> n >> k;
	unsigned int t;
	while(i < n){
	    cin >> t;
	    if( t % k == 0){
		count++;
	    }
	    i++;
	}
	cout << count << endl;
	return 0;
}
