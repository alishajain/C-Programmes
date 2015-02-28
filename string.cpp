#include<iostream>
#include<cstring>
#include<math.h>
using namespace std;

float sum(float a, float b) {
	return a+b;
}

float perimeter(float a) {
	return 2*a;
}

float trigno(float x) {
	return x;
}

main()
{
	char a[] = "lets try c-strings";
	char b[strlen(a)];
	cout << a << "	" << b << endl;

//	b = a;

	for(int i = 0; i < strlen(a); i++)
	{
	   b[i] = a[i];
	}
	cout << a << "	" << b << endl;

	float p = perimeter(sum(10.0, 20.0));
	cout << p << endl;

	float s = trigno(sin(45));
	float c = trigno(cos(45));
	float t = trigno(tan(45));

	cout << "sin(45)=" << s << "	cos(45)=" << c << "	tan(45)=" << t << endl;
	return p;
}
