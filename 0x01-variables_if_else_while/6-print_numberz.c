#include <stdio.h>
/**
*main-program entry point
*Return:0 no error, non zero if error
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');
	return (0);
}
