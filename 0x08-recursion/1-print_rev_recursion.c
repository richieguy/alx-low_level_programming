#include "main.h"
/**
 *  * _print_rev_recursion - rrri
 *   * @s: parametyer ghj
 */
void_print_rev_recursion(char *s)
{
	if (*s != '\0')
		return;
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
