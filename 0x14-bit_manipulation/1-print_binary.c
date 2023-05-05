#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: num
 * Return: non :)
 */
void print_binary(unsigned long int n)
{
	int cnt = 0;
	unsigned long int temp;

	if (n == 0)
		_putchar('0');
	temp = n;
	while (temp)
	{
		temp = temp >> 1;
		cnt++;
	}
	if (cnt == 64)
		cnt = cnt >> 1;
	while (cnt--)
	{
		unsigned long int b = 1 << cnt;

		if (b & n)
			_putchar('1');
		else
			_putchar ('0');
	}
}
