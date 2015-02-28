#include<iostream>
#include<string>
using namespace std;

main()
{
	string a, b;
	b = "My name is alisha";
	cout << "Enter a string\n";
	getline(cin, a);
	int n = a.compare(b);
	if (n == 0) {
	    cout << a << " matched " << b << endl;
	} else if (n < 1) {
	    cout << a << " comes before " << b << endl;
	} else  {
	    cout << a << " comes after " << b << endl;
	}
cout << "****************************************\n";
        int m = a.compare(0, 10, b, 0, 10);
        if (m == 0) {
            cout << a << " matched " << b << endl;
        } else if (m < 1) {
            cout << a << " comes before " << b << endl;
        } else  {
            cout << a << " comes after " << b << endl;
        }
}
