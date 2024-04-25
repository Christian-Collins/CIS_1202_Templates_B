// Christian Collins
// CIS 1202 501
// April 25, 2024

#include <iostream>
using namespace std;

template <typename T>
T half(T value)
{
	int temp = value;
	double result;
	if (value == temp)
	{
		result = value / 2.0;
		result = round(result);
	}
	else
		result = value / 2.0;
	return(result);
}

int main()
{
	int a = 205;
	float b = 53.03;
	double c = 2.93;
	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;
	return(0);
}
