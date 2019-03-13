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
	int result = 0, counter = 0;
	int length = strlen(str);

	while (*str)
	{
		if (*str < '0' || *str > '9')
			throw notNumberExeption();
		result += (*str - '0') * pow(10, length - counter++ - 1);
		str++;
	}
	return result;
}


int main()
{
	cout << custom_atoi("0123") << endl;
	system("pause");
    return 0;
}

