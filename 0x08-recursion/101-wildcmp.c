#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 *  * find_strlen - Returns the length of a string.
 *   * @s: The string to be measured.
 *    *
 *     * Return: The length of the string.
 *      */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
	len += find_strlen(s + len);
	}

	return (len);
}

/**
 *  * iterate_wild - Iterates through a string located at a wildcard
 *   *                until it points to a non-wildcard character.
 *    * @wildstr: The string to be iterated throu
 */
void iterate_wild(char **wildstr)
{
	if (**wildstr == '*')
	{
		(*wildstr)++;
		iterate_wild(wildstr);
	}
}

/**
 *  * postfix_match - Checks if a string str matches the postfix of
 *   *                 another string potentially containing wildcards.
 *    * @str: The string to be matched.
 *     * @postfix: The postfix.
 *      *
 *       * Return: If str and postfix are identical - a pointer to the null byte
 *        *                                            located at the end of postfix.
 *         *         Otherwise - a pointer to the first unmatched character in postfix.
 */
char *postfix_match(char *str, char *postfix)
{
	int str_len = strlen_no_wilds(str) - 1;
	int postfix_len = strlen_no_wilds(postfix) - 1;

	if (*postfix == '*')
		iterate_wild(&postfix);

	if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
	return (postfix_match(str, postfix));
	}

		return (postfix);
}

/**
 *  * wildcmp - Compares two strings, considering wildcard characters.
 *   * @s1: The first string to be compared.
 *    * @s2: The second string to be compared - may contain wildcards.
 *     *
 *      * Return: If the strings can be considered identical - 1.
 *       *         Otherwise - 0.
 */        
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}
