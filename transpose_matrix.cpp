#include <iostream>

using namespace std;

main()
{
	int size;

	cout << "Enter the size of the square matrix: ";
	cin >> size;

	float A[size][size], B[size][size];

	for (int i = 0; i < size; i++)
	{
	   for (int j = 0; j < size; j++)
	   {
		cout << "Enter the element at position (" << i+1 << ", " << j+1 << "): ";
		cin >> A[i][j];
	   }
	}

        for (int i = 0; i < size; i++)
        {
           for (int j = 0; j < size; j++)
           {
        	B[j][i] = A[i][j];        
           }
        }

	cout << "Matrix A" << endl;
        for (int i = 0; i < size; i++)
        {
           for (int j = 0; j < size; j++)
           {
		cout << " " << A[i][j];
           }
	   cout << endl;
        }

        cout << "Matrix B" << endl;
        for (int i = 0; i < size; i++)
        {
           for (int j = 0; j < size; j++)
           {
                cout << " " << B[i][j];
           }
           cout << endl;
        }

	return 0;
}
