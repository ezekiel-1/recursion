#include <stdio.h>
/**
 * main - main block
 * Description: prints all singlee digitd number of base 10
 * starting from 0, followed by a new line
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}
	putchar('\n');
	return (0);
}
