
#include <cmath>
#include <iomanip>
#include <iostream>
#include <conio.h>

using namespace std;

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	double val;
	val = fmax(10.0, -1.0f);
	cout << fixed << setprecision(4) << "fmax(10.0, -1.0f) = " << val << "\n";

	_getch();
	return 0;
}
