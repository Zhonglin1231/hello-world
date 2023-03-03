#include <iostream>
using namespace std;
#include"Robin Package.h"

// power(a,b) represents for a^b.
long long power(int base, int power)
{
	long long result = 1;
	for (int i = 0; i < power; i++)
	{
		result *= base;
	}
	return result;
}

// int_len(a) represents for length of integer a.
short int_len(long long num)
{
	short num_len;
	num_len = 0;
	while (true)
	{
		if ((num / power(10, num_len) >= 1))
		{
			num_len++;
		}
		else
		{
			break;
		}
	}
	return num_len;
}

// str_len(a) represents for length of string a.
short str_len(char str[])
{
	short a = sizeof(str) / sizeof(str[0]);
	return a;
}


//list()
/*double list(long long number)
{
	int number_len = (sizeof(number)/sizeof(long long));
	for (int i = 0; i < number_len; i++)
	{

	}
}
*/;