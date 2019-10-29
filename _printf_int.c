#include "holberton.h"
/**
 * pi - Print integers
 * @arg: arguments
 * Return: Number of elements of the integer argument
 * -------------------------------------------------------------
 * Source File: _printf_int.c - program to count integer element
 * -------------------------------------------------------------
 * This file contains the program that counts integer elements
 * -------------------------------------------------------------
 * Authors - Carlos Garcia - Orlando Gomez - Cohort 10 - Cali
 * Project Date - 25/10/2019 - 29/10/2019
 * -------------------------------------------------------------
 **/
int pi(va_list arg)
{
	int con = 0, n = va_arg(arg, int);
	int num, dig, i, lon;

	lon = n;
	printf("%d", lon);
	if (n < 0)
	{
		con++;
		lon = lon * -1;
		_putchar('-');
	}

	if (lon == 0)
	{
		con++;
		_putchar('0');
		return (con);
	}

	i = 1;
	while ((lon / i) > 9)
	{
		i = i * 10;
	}
	while (i > 0)
	{
		num = lon / i;
		dig = num % 10;
		con++;
		_putchar(dig + '0');
		i = (i / 10);
	}
	return (con);
}
