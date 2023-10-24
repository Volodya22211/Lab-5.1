#include <iostream>
#include <cmath>
using namespace std;
double k(const double a, const double b); // прототип
int main()
{
	double p, q;
	cout << "p = "; cin >> p;
	cout << "q = "; cin >> q;
	double g = pow(k(p + sqrt(q), q - sqrt(p)), 2) - k(1, p + q);
	cout << "g = " << g << endl;
	return 0;
}
double k(const double x, const double y) // визначення
{
	return (x / abs(pow(x, 3) + pow(y, 3)) + y / (abs(x + y)));
}