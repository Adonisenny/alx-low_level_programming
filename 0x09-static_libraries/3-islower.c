#include "main.h"

/**

 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.

 */

void print_alphabet_x10(void)

{

int count = 0;

char letter;

while (count++ <= 9)

{

for (letter = 'a'; letter <= 'z'; letter++)

_putchar(letter);

_putchar('\n');

}

}
























































































































































#include "main.h"
/**
 *_islower - checks for a lowercase character
 *@c: letter being tested
 * Return: Always 0
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
