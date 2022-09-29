#include "main.h"
/**
 *  * _strlen_recursion - gives lengtghkk
 *   * @s: hjkj
 *    * Return: length
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')

	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	 (len);
	return 0;
}
