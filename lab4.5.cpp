#include <iostream> 
#include <iomanip> 
#include <time.h> 

using namespace std;

int main()
{
	double x, y, R, i;
	cout << "R = "; cin >> R;
	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		if ((y <= x + R && y >= 0 && x <= 0) ||
			(y * y <= R * R - x * x && y >= 0 && x >= 0) ||
			(y * y <= R * R - x * x && y <= 0 && x <= 0))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

	for (i = 0; i < 10; i++)
	{
		x = R * 2. * rand() / RAND_MAX - R;
		y = R * 2. * rand() / RAND_MAX - R;
		if ((y <= x + R && y >= 0 && x <= 0) ||
			(y * y <= R * R - x * x && y >= 0 && x >= 0) ||
			(y * y <= R * R - x * x && y <= 0 && x <= 0))
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	return 0;
}