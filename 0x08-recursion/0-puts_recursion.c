#include "main.h"

/**
 * _puts_recursion - Function entry
 * Description: A function that prints a string, followed by a new line
 * @s: variable that houses the base address
 * Return: See nothing!
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(&s[1]);
	}
	else
	{
		_putchar('\n');
	}
}
