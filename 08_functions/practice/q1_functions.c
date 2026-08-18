/**
 * QUESTION 1 (warm-up): writing and calling your own functions
 *
 * Part a) Take the triangle code you wrote in 07_looping/practice and move
 *         it into a function:
 *
 *             void triangle(int height);
 *
 *         Call it three times from main with heights 3, 5 and 1.
 *         Declare it above main, define it below -- the declaration.c style.
 *
 * Part b) Write a function that RETURNS a value rather than printing:
 *
 *             int sum_to(int n);
 *
 *         It returns 1 + 2 + ... + n. So sum_to(4) is 10.
 *         Print the results of sum_to(4), sum_to(10) and sum_to(1) from main.
 *
 * Part c) Now add this as the LAST line inside sum_to, just before its return:
 *
 *             n = 0;
 *
 *         In main, do this:
 *
 *             int x = 5;
 *             printf("%d\n", sum_to(x));
 *             printf("%d\n", x);
 *
 *         Predict what the second line prints BEFORE you run it. Write your
 *         prediction down. Then run it.
 *
 *         Whatever you saw, explain it in a comment at the bottom of this
 *         file. bigger_function.c does the same thing with start_i++ if you
 *         want a second look at it.
 *
 * This one thing -- what a function does and does not get when you pass it a
 * variable -- is the whole reason section 12 (pointers) exists. Get it now.
 */
#include <stdio.h>

/* your declarations here */

void triangle(int height);

int sum_to(int limit);

int main()
{
	// a
	// triangle(8);

	// b
	// printf("sum_to 4 is %d\n", sum_to(4));
	// printf("sum_to 10 is %d\n", sum_to(10));
	// printf("sum_to 1 is %d\n", sum_to(1));

	// c
	int x = 5;
	printf("%d\n", sum_to(x));
	printf("%d\n", x);

	return 0;
}

int sum_to(int limit)
{
	int total = 0;
	for (int i = 1; i <= limit; i++)
	{
		total += i;
	}
	return total;
}

void triangle(int height)
{
	for (int i = 1; i <= height; i += 2)
	{
		for (int z = 1; z <= ((2 * height - 1) - i) / 2; z++)
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
