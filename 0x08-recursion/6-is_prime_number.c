#include "main.h"

/**
 *  * is_divisible - Checks if a number is divisible.
 *   * @num: The number to be checked.
 *    * @div: The divisor.
 *     *
 *      * Return: If the number is divisible - 0.
 *       *         If the number is not divisible - 1.
 */
int prime2(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime2(a, b + 1));
}
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
