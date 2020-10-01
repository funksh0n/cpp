#include <iostream>
using namespace std;

double func(int days, double amount)
{
	if (days > 1) return func(days - 1, amount * 2);
	else return amount;
}

int
main(int argc, char *argv[])
{
	for (int day {1}; day <= 30; day++)
		cout << "Day " << day << " = $" << func(day, 0.01) << endl;
	return 0;
}

