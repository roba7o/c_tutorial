/**
 * QUESTION 1 (warm-up): & and *
 *
 * Two symbols, and they are opposites:
 *
 *     &x   "the address of x"        int    -> int*
 *     *p   "the thing p points at"   int*   -> int
 *
 * Part a) Predict every line of output BEFORE running, then check:
 *
 *             int a = 42;
 *             int *ap = &a;
 *
 *             printf("%d\n", a);
 *             printf("%p\n", (void*)&a);
 *             printf("%p\n", (void*)ap);
 *             printf("%d\n", *ap);
 *             *ap = 99;
 *             printf("%d\n", a);
 *
 *         The last one is the one that matters. You never assigned to a.
 *
 * Part b) In 08 you learned a function cannot change its caller's variable.
 *         Now write the exception:
 *
 *             void swap(int *x, int *y);
 *
 *         so that this works:
 *
 *             int a = 1, b = 2;
 *             swap(&a, &b);         // a is now 2, b is now 1
 *
 *         Then write the broken version, swap(int x, int y), and confirm it
 *         does nothing. Keep both in the file with a comment explaining the
 *         difference in terms of what is copied.
 *
 * Part c) hello_pointers.c stacks these up: int*, int**, int***. Rebuild that
 *         yourself and print a through all three levels.
 *
 *         Then answer in a comment: what is the TYPE of &ap, and what is the
 *         type of *app? Getting fluent at reading these is most of what
 *         pointers are.
 */
#include <stdio.h>

/* your declarations here */

int main()
{

	/* your code here */

	return 0;
}

/* your definitions here */
