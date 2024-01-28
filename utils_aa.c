#include "main.h"
/**
 * is_printable - Evaluates char.
 * @c: char .
 * Return: 1 or 0 .
 */
int is_printable(char c)
{
if (c >= 32 && c < 127)
return (1);
return (0);
}
/**
 * append_hexa_code - append ascci in hexadecimal.
 * @buffer: array chars.
 * @i: Index to start.
 * @ascii_code: ASSCI CODE.
 * Return: 3 .
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";

	if (ascii_code < 0)
	ascii_code *= -1;
	buffer[i++] = '\\';
	buffer[i++] = 'x';
	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];
	return (3);
}
/**
 * is_digit - verifies char.
 * @c: char.
 * Return: 1 digit, 0 otherwise.
 */
int is_digit(char c)
{
if (c >= '0' && c <= '9')
return (1);
return (0);
}
/**
 * convert_size_number - casts a number.
 * @num: number.
 * @size:  type to be casted.
 * Return: value of number.
 */
long int convert_size_number(long int num, int size)
{
if (size == S_LONG)
return (num);
else if (size == S_SHORT)
return ((short)num);
return ((int)num);
}
/**
 * convert_size_unsgnd - cast a number.
 * @num: number.
 * @size: number the type.
 * Return: casted value.
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
	return (num);
	else if (size == S_SHORT)
	return ((unsigned short)num);
	return ((unsigned int)num);
}
