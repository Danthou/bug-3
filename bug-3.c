#include <stdio.h>
#include <string.h>
#include <stdint.h>

#define NUM_ROWS 10
#define NUM_COLS 10
uint8_t pixels[NUM_ROWS][NUM_COLS];

int main()
{
	/* Set all pixel values to zero */
	memset(pixels, 0, sizeof(pixels));

	int i, j;

	/* Increase all pixel values by one */

	for(i = 0; i < NUM_ROWS; i++)
		for(j = 0; j < NUM_COLS; j++);
			pixels[i][j]++;

	/* Print out a table of all pixels */
	for(i = 0; i < NUM_ROWS; i++)
	{
		for(j = 0; j < NUM_COLS; j++)
			printf("%03d ", pixels[i][j]);

		printf("\n");
	}

	return 0;
}
