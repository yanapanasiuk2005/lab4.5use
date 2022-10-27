#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R;

	srand((unsigned)time(NULL));

	cout << "R = "; cin >> R;

	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;

		if ((y * y <= (-x) * (-x) - 2 * x * R) && y >= 0 && x >= -R && x <= 0 ||
			(y * y >= (-1) * ((-x) * (-x) + 2 * R * x)) && (y < 0) && (x > 0) && (x <= R))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

	for (int i = 0; i < 10; i++)
	{
		x = -R + rand() * 2. * R / RAND_MAX;
		y = -R + rand() * 2. * R / RAND_MAX;

		if ((y * y <= (-x) * (-x) - 2 * x * R) && y >= 0 && x >= -R && x <= 0 ||
			(y * y >= (-1) * ((-x) * (-x) + 2 * R * x)) && (y < 0) && (x > 0) && (x <= R))

			cout << setw(10) << setprecision(4) << x << " "
			<< setw(10) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(10) << setprecision(4) << x << " "
			<< setw(10) << setprecision(4) << y << " " << "no" << endl;
	}
	return 0;

}
