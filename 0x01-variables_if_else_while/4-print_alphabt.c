#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z';)
	{

		if (alpha == 'q')
		{
			alpha++;
		}
		else if (alpha == 'e')
		{
			alpha++;
		}
		else
		{
			putchar(alpha);
			alpha++;
		}
	}

		putchar('\n');


		return (0);
}

