

#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, aref, geom;
	cout << "Введите значения а и б" << endl;
	cin >> a >> b;
	aref = ((a + b) / 2);
	geom = (sqrt(a*b));
	cout << "Среднеарифметическое=" <<aref<< endl << "Среднегеометрическое=" <<geom<< endl;
	return;
}


