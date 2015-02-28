#include <iostream>
using namespace std;

class Distance
{
	int feet;
	float inches;
    public:
	Distance() : feet(0), inches(0.0)
	{ }

	Distance(int ft, float in) : feet(ft), inches(in)
	{ }

	void getdist()
	{
	    cout << "Enter feet: ";
	    cin >> feet;
	    cout << "Enter inches: ";
	    cin >> inches;
	}

	void showdist() const
	{ cout << feet << "\'-" << inches << endl; }

	Distance operator + (Distance) const;
};

Distance Distance::operator + (Distance d2) const
{
	int f = feet + d2.feet;
	float i = inches + d2.inches;

	if(i >= 12.0)
	{
	   i -= 12.0;
	   f++;
	}

	return Distance(f, i);
}

main()
{
	Distance d1, d3, d4;
	d1.getdist();

	Distance d2(4, 4.5);
	d3 = d1 + d2;

	d4 = d1 + d2 + d3;

	d1.showdist();
	d2.showdist();
	d3.showdist();
	d4.showdist(); 
}

