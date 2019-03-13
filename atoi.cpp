// atoi.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

class notNumberExeption {
};

int custom_atoi(char* str)
{
	char numbers[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	int result = 0, counter = 0;
	int length = strlen(str);
	
	while (*str)
	{
		bool intFound = false;
		for (int i = 0; i < 10; i++)
		{
			if (*str == numbers[i])
			{
				result += i * static_cast<int>(pow(10, length - counter - 1));
				counter++;
				intFound = true;
			}
		}
		if (!intFound)
			throw notNumberExeption();
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

