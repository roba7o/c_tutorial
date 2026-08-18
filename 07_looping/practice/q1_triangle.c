/**
 * QUESTION 1 (warm-up): nested loops
 *
 * Part a) Print a right-angled triangle of '*' with a height of 5,
 *         using two nested for loops. Expected output:
 *
 *             *
 *             **
 *             ***
 *             ****
 *             *****
 *
 * Part b) Change the inner loop so it prints digits instead of stars,
 *         counting up from 1 on every row:
 *
 *             1
 *             12
 *             123
 *             1234
 *             12345
 *
 * Part c) (stretch) Print a centred pyramid. Hint: each row needs two
 *         inner loops -- one for the leading spaces, one for the stars.
 *
 *                 *
 *                ***
 *               *****
 *              *******
 *             *********
 *
 * Hint: printf("*") prints a single character with no newline.
 *       The inner loop's end condition can depend on the outer loop's
 *       variable -- that is the whole trick here.
 */
#include <stdio.h>
int main()
{
	for (int i = 1; i < 6; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	// Part B

	for (int i = 1; i < 6; i++)
	{

		for (int j = 1; j <= i; j++)
		{
			printf("%d", j);
		}
		// printf("%d", i);
		printf("\n");
	}

	// Part C
	printf("part c\n");

	for (int i = 1; i <= 10; i += 2)
	{
		for (int z = 1; z <= (9 - i) / 2; z++)
		{
			printf(" ");
		}
		for (int x = 1; x <= i; x++)
		{
			printf("*");
		}
		printf("\n");
	}
}
