#include "holberton.h"
/**
 * pd - Print decimals
 * @arg: arguments
 * Return: Number of elements of the decimal argument
 * -------------------------------------------------------------
 * Source File: _printf_dec.c - program to count decimal element
 * -------------------------------------------------------------
 * This file contains the program that counts decimal elements
 * -------------------------------------------------------------
 * Authors - Carlos Garcia - Orlando Gomez - Cohort 10 - Cali
 * Project Date - 25/10/2019 - 29/10/2019
 * -------------------------------------------------------------
 **/
int pd(va_list arg)
{
	long int n, num, ld;
	long int dig;
	long int exp, con;
	long int val = 1;

	n = va_arg(arg, int);
	if (n < 0)
		val = -1;
	ld = n % 10;
	con = 1;
	exp = 1;
	n = n / 10;
	num = n;
	if (val < 0)
	{
		_putchar('-');
		num = num * -1;
		n = -n;
		ld = -ld;
		++con;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			dig = num / exp;
				_putchar(dig  + '0');
			num = num - (dig * exp);
			exp = exp / 10;
			++con;
		}
	}
	_putchar(ld + '0');
	return (con);
}
