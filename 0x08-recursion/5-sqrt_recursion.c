#include "main.h"

/**
 *  * find_sqrt - Finds the natural square root of an inputted number.
 *   * @num: The number to find the square root of.
 *    * @root: The root to be tested.
 *     *
 *      * Return: If the number has a natural square root - the square root.
 *       *         If the number does not have a natural square root - -1.
 */
int root(int n, int ans)
{
	if (ans * ans == n)
		return (ans);
	if (ans * ans > n)
		return (-1);
	return (root(n, ans + 1));
}

int _sqrt_recursion(int n)
{
	return (root(n, 0));
}
