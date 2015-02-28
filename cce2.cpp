#include <iostream>
using namespace std;

int main()
{
	int amount;
	float balance;

	cout << "Enter amount and balance\n";
	cin >> amount >> balance;

	if ((amount % 5) == 0 && (amount < (balance - 0.50))){
	    balance = balance - (amount + 0.50);
	}
	cout << balance << endl;
	return 0;
}
