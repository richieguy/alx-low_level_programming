nclude "main.h"

/**
 *  * _strncpy - Copies at most an inputted number
 *   *            of bytes from string src into dest.
 *    * @dest: The buffer storing the string copy.
 *     * @src: The source string.
 *      * @n: The maximum number of bytes to copied from src.
 *       *
 *        * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
