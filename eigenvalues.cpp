#include <iostream>
#include <math.h>

using namespace std;

main()
{
	float A[2][2], lambda1, lambda2, d, b;

	cout << "Elements for transformation matrix\n";
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << "       Element at (" << i+1 << ", " << j+1 << ") ";
                cin >> A[i][j];
            }
        }

	b = A[0][0] + A[1][1];
	d = pow(b, 2) - (4 * (((A[0][0]) * (A[1][1])) - ((A[0][1]) * (A[1][0]))));

	lambda1 = (b + sqrt(d))/2;
        lambda2 = (b - sqrt(d))/2;

	cout << "    Eigenvalues for the given matrix\n        Lambda1 = " << lambda1 << "\n        Lambda2 = " << lambda2 << endl; 
}
