#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	double x, y;
	const double pi = 3.14159265;
	cout << "Введите значение в градусах" << endl;
	cin >> x;
	x = (x*(pi/180));
	y = ((x*x) - sin(x) + cos(x));
	cout << "Значение(градусы были переведены в радианы,не беспокойтесь =" << y;
	return;
}




