/**
 * QUESTION 2 (hard): recursion
 *
 * A recursive function calls itself. It needs two things or it never stops:
 *   - a BASE CASE, where it returns without calling itself
 *   - a step that moves the argument towards that base case
 * countdown() in recursion.c has both. Find them before you start.
 *
 * Part a) Write, using NO loops at all:
 *
 *             int power(int base, int exp);
 *
 *         power(2,5) is 32, power(3,3) is 27, power(7,0) is 1.
 *         Work out the base case first: what is anything to the power of 0?
 *         Then work out how power(2,5) can be written in terms of power(2,4).
 *
 * Part b) Write a recursive version of fibonacci that RETURNS the nth
 *         number instead of printing the sequence:
 *
 *             int fib(int n);
 *
 *         with fib(1) = 0, fib(2) = 1, fib(3) = 1, fib(4) = 2, fib(5) = 3.
 *         This one needs TWO base cases and TWO recursive calls.
 *
 *         Print fib(1) through fib(10) from main using a loop, and check it
 *         against the sequence your iterative version printed.
 *
 * Part c) Put this as the very first line inside fib:
 *
 *             printf("call\n");
 *
 *         Run fib(10), then fib(20), then fib(25), and count the lines
 *         each time:
 *
 *             ./q2_recursion | wc -l
 *
 *         The count does something alarming. In a comment at the bottom of
 *         this file, say what you think is happening -- draw the call tree
 *         for fib(5) on paper if it helps.
 *
 *         Your iterative fibo() from fibonacci.c does n steps for the whole
 *         sequence. Which version would you actually ship, and why?
 */
#include <stdio.h>

/* your declarations here */
int power(int base, int exp);
int fibo(int n);

int main()
{

	/* your code here */
	// printf("Power = %d\n", power(3, 3));

	printf("Fibo = %d\n", fibo(10));

	return 0;
}

/* your definitions here */

int fibo(int n)
{
	printf("call\n");
	if (n == 1)
	{
		return 0;
	}
	if (n == 2)
	{
		return 1;
	}

	return fibo(n - 1) + fibo(n - 2);
}

int power(int base, int exp)
{
	if (exp == 0)
	{
		return 1;
	}
	return base * power(base, (exp - 1));
}
