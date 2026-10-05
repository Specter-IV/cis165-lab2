#include <iostream>
using namespace std;

int main()
{
	double tank_gallons = 16;
	double miles_per_tank = 312;

	double miles_per_gallon = miles_per_tank / tank_gallons;

	cout << "This car gets " << miles_per_gallon << " miles per gallon.";

	return 0;
}
