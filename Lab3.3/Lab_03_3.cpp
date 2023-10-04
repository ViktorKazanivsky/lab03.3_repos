// Lab_03_3.cpp
// Казанівський Віктор
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 10

#include <iostream>
#include <cmath>

using namespace std;
int main()

{
	double x;
	double R;
	double y;

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;	if (-8 - R <= x && x < -8 + R)
		y = R - sqrt(4 - pow(x + 8, 2));
	else
		if (8 + R < x && x <= -4)
			y = R;
		else
			if (-4 < x && x <= 0)
				y = -0.5 * x;
			else
				if (2 <= x && x <= 4)
					y = x - 3;
				else
					y = x / 3;	cout << endl;
	cout << "y = " << y << endl;

	cin.get();
	return 0;}