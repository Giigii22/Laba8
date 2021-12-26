#include<iostream>
#include "math.h"
#include "Header.h"

using namespace std;

Complex y(Complex& z)
{
	Complex i(0, 1);
	Complex res = z * 2 + sin(z-i*10);
	return res;
}

int main()
{
	Complex a, res;
	cout << "Enter the real and imaginary part of the complex number" << endl;
	cin >> a;
	res = y(a);
	cout << res;
}
