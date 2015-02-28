#include <iostream>

using namespace std;

main()
{
// Initializations
	int m1, n1, m2, n2;
	float A[m1][n1], B[m2][n2], AB[m1][n2];

// Details for first matrix
	cout << "Matrix A";
	cout << "\nEnter no of rows: ";
	cin >> m1;
	cout << "Enter no of columns: ";
        cin >> n1;

	cout << "Enter Elements\n";
	for (int i = 0; i < m1; i++)
	{
	    for (int j = 0; j < n1; j++)
	    {
		cout << "	Element at (" << i+1 << ", " << j+1 << ") ";
		cin >> A[i][j];
	    }
	}

        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                cout << " " << A[i][j];
            }
            cout << endl;
        }
// Details for second matrix
        cout << "Matrix B";
        cout << "\nEnter no of rows: ";
        cin >> m2;
        cout << "Enter no of columns: ";
        cin >> n2;

///////////////////////////////////////////////////
// Unnecessary code
// But when it is removed segmentation fault error occurs. Why? Don't know
/*            for (int i = 0; i < m2; i++)
            {
                for (int j = 0; j < n2; j++)
                {
			B[i][j] = 0;
                }
            }
*///////////////////////////////////////////////////

        cout << "Enter Elements\n";

	for (int i = 0; i < m2; i++)
	{
	    for (int j = 0; j < n2; j++)
	    {
		cout << "	Element at (" << i+1 << ", " << j+1 << ") ";
		cin >> B[i][j];
	    }
	}
	cout << endl;

        for (int i = 0; i < m2; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                cout << " " << B[i][j];
            }
            cout << endl;
        }
// Check condition and then perform matrix multiplication
/*	if (n1 == m2)
	{
            for (int i = 0; i < m1; i++)
            {
                for (int j = 0; j < n2; j++)
                {
		    AB[i][j] = 0;
		    for (int k = 0; k < n1; k++)
		    {
			AB[i][j] += A[i][k]*B[k][j];
		    }
                }
            }
// Show resultant matrix
	    cout << "Resultant Matrix is :\n";
            for (int i = 0; i < m1; i++)
            {
                for (int j = 0; j < n2; j++)
                {
                    cout << " " << AB[i][j];
                }
		cout << endl;
	    }
	}
	else
	{
	    cout << "For matrix multipliaction no of columns of one matrix should be equal to no of rows of second matrix" << endl;
	}
*/
}

