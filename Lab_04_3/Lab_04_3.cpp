// Lab_04_2.cpp
// Лазар Владислав
// Лабораторна робота No 4.3
// Табуляція функції, заданої формулою: функція з параметрами.
// Варіант 11

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double x, xp, xk, dx, a, b, c, F;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	cout << fixed;
	cout << "-----------------" << endl;
	cout << "|" << setw(5) << "x" << " |" << endl;
	cout << "-----------------" << endl;

	for (x = xp; x <= xk; x += dx)
	{
		if (x < 1 && c != 0)
		{
			F = (a * x * x) + (b / c);
		}
		else
		{
			if (x > 1.5 && c == 0)
			{
				F = (x - a) / ((x - c) * (x - c));
			}
			else
			{
				F = (x * x) / (c * c);
			}
		}
		cout << "|" << setw(7) << setprecision(2) << F
			<< " |" << endl;
	}

	cout << "-----------------" << endl;

	return 0;
}