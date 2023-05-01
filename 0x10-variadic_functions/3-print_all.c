#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
  * print_all - print all
  * @format: types of args
  * Return: void
  */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *string, *sp = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sp, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(list, double));
					break;
				case 's':
					string = va_arg(list, char*);
					if (!string)
						string = "(nil)";
					printf("%s%s", sp, string);
					break;
				default:
					i++;
					continue;
			}
			sp = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
