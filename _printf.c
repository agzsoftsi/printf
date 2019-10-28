#include "holberton.h"
/**
 * _printf - function printf selector
 * @format: format
 * Return: Number of printed characters excluding the null
 * Authors - Carlos Garcia - Orlando Gomez - Cohort 10 - Cali
 **/
int _printf(const char *format, ...)
{
	unsigned int con1 = 0, con2 = 0, flag, lon = 0;
	va_list arg;

	cf_t print[] = { {"c", pc}, {"s", ps}, {"d", pd}, {"i", pi}, {NULL, NULL} };
	va_start(arg, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (0);
