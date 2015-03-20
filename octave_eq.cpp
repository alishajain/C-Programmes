#include <iostream>

using namespace std;

main()
{
	int n, m;	//size of array
	cout << "Enter size of first permutation matrix\n";
	cin >> n;
	cout << "Enter size of second permutation matrix\n";
	cin >> m;

	int P1[n][n], P2[m][m], P3[n][n];
	cout << "First matrix\n";
	for (int i = 0; i < n; i++)
	{
	    for (int j = 0; j < n; j++)
	    {
		cout << "Element at (" << i+1 << ", " << j+1 << ")	";
		cin >> P1[i][j];
	    }
	}

	cout << "Enter only 0 and 1 as elements\n";

	cout << "Second matrix\n";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << "Element at (" << i+1 << ", " << j+1 << ")	";
                cin >> P2[i][j];
            }
        }
	
	if (n != m)
	{
	    cout << "Both matrices have to be of same size\n";
	}
	else
	{
	    for (int i = 0; i < n; i++)
	    {
		for (int j = 0; j < n; j++)
		{
		    if (P1[i][j] == P2[i][j])
		    {
			P3[i][j] = 1;
	            }
		    else
		    {
			P3[i][j] = 0;
		    }
		}
	    }

	    for (int i = 0; i < n; i++)
	    {
		for (int j = 0; j < n; j++)
		{
		    cout << P3[i][j] << " ";
		}
		cout << endl;
	    }
	}
}
