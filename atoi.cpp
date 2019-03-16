// atoi.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

class notNumberExeption {
};

int custom_atoi(const char* str)
{
	int result = 0;
	bool isNegative = false;
	if (*str == '-')
	{
		isNegative = true;
		str++;
	}

	while (*str)
	{
		if (*str < '0' || *str > '9')
			throw notNumberExeption();
		result *= 10;
		result += (*str - '0');
		str++;
	}

	if (isNegative)
		result *= -1;

	return result;
}


int main()
{
	const char* a = "-001234";
	cout << custom_atoi(a) << endl;
	system("pause");
    return 0;
}

