#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
#include "var.h"
#include "sum.h"
#include "dod.h"

using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;


int main()
{
	cout << "x_p = "; cin >> x_p;
	cout << "x_k = "; cin >> x_k;
	cout << "dx = "; cin >> dx;
	cout << "e = "; cin >> e;
	cout << endl;

	cout << fixed;
	cout << "-----------------------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "arcth(x)" << " |"
		<< setw(9) << "s" << " |"
		<< setw(6) << "n" << " |"
		<< endl;
	cout << "-----------------------------------------" << endl;

	x = x_p;
	while (x <= x_k)
	{
		sum();

		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << 0.5*log((1+x)/(1-x)) << " |"
			<< setw(10) << setprecision(5) << s << " |"
			<< setw(5) << n << " |"
			<< endl;

		x += dx;
	}
	cout << "-----------------------------------------" << endl;
	return 0;
}
