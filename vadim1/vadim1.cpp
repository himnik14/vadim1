#include <iostream>
#include <clocale>
#include <math.h> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int x, y, pi = 3.14;
	double F
	cout << "Введите X: ";
	cin >> x;
	cout << "Введите Y: " << "\n";
	cin >> y;
	F = (0.75 + 3 * exp(pow(y, 2) - 1)) / (sqrt(fabs(y) + 2) - log(fabs(x - y)) + tan(x - pi)) - 2 * pow(cos((x - y) / 2), 2);
	cout << F;
}