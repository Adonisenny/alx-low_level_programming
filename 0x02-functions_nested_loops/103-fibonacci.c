#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
unsigned long int j, k, next, sum;
k = 1;
l = 2;
sum = 0;
for (i = 1; i <= 33; ++i)
{
if (k < 4000000 && (k % 2) == 0)
{
sum = sum + j;
}
next = j + l;
k = l;
l = next;
}
printf("%lu\n", sum);
return (0);
}
