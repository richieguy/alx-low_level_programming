#include "main.h"

/**
*  * main - check the code for Holberton School students.
*   *
*    * Return: Always 0.
*/
int main(void)
{
		print_alphabet();
		return (0);
}
void print_alphabet(void)
{
		char letter = 'a';

		while (letter <= 'z')
			{
			_putchar(letter);
			letter++;
			}
				_putchar('\n');
}
