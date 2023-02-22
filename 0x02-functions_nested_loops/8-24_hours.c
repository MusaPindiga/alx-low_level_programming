#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - a funtion that print the 24hrs and it's minutes
 *
 *
 *
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 24; i++)

		for (j = 0; j <= 59; j++)
			printf("%02d:%02d\n", i, j);
}
