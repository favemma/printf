#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"

/**
*_printf replicate the Prinft builtin function in c
*@format: char input
* Returns the formatted output
**/

int _printf(char * format, ...)
{

	va_list vl;
	int i = 0, j=0;
		char buff[100]={0}, tmp[20];
		va_start( vl, format );
		while (format && format[i])
		{
			if(format[i] == '%')
			{
			i++;
			switch (format[i])
			{
				case 'c':
				{
					buff[j] = (char)va_arg( vl, int );
					j++;
					break;
				}
				case 'd':
				{
					itoa(va_arg( vl, int ), tmp, 10);
					_strcpy(&buff[j], tmp);
					j += _strlen(tmp);
					break;
				}
				case 'x':
				{
					itoa(va_arg( vl, int ), tmp, 16);
					_strcpy(&buff[j], tmp);
					j += _strlen(tmp);
					break;
				}
			}
		}
		else
		{
			buff[j] =format[i];
			j++;
		}
		i++;
   	}
	fwrite(buff, j, 1, stdout);
	va_end(vl);
	return j;
}
