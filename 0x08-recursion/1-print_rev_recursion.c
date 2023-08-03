#include "main.h"
/**
 * get_length - gets the length of given string
 *
 * @s: - string
 *
 * Return: - Always size of string
 */
int get_length(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: - string to reverse
 *
 */
void _print_rev_recursion(char *s)
{
	int length, i;

	length = get_length(s);

	if (length <= 0)
	{
		return;
	}
	_putchar(s[length - 1]);
	_print_rev_recursion(s + 1);

}
