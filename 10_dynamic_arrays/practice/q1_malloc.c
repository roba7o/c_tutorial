/**
 * QUESTION 1 (warm-up): malloc, free, and what goes wrong
 *
 * Part a) Ask the user for a size with fscanf(stdin,"%d",&n), malloc an int
 *         array of that size, fill it with the first n square numbers, print
 *         them, then free it.
 *
 *         Check the return of malloc against NULL like hello_dynamic.c does.
 *         Skipping that check is the single most common bug in beginner C.
 *
 * Part b) In 09 you could not write a function that returns an array. Now you
 *         can. Write:
 *
 *             int *make_squares(int n);
 *
 *         It mallocs, fills, and returns the pointer. main frees it.
 *
 *         Why does this work when returning a local int arr[10] did not?
 *         Answer in a comment -- it is about WHERE the memory lives.
 *
 * Part c) Three deliberate mistakes. Do each, observe, then undo it:
 *
 *         1. free(a) twice in a row
 *         2. print a[0] after free(a)
 *         3. remove the free entirely, and run:  leaks -atExit -- ./q1_malloc
 *
 *         Write down what each one did. Note that (2) will very likely print
 *         a perfectly normal-looking number. That is the point: nothing tells
 *         you it is wrong.
 */
#include <stdio.h>
#include <stdlib.h>

/* your declarations here */

int main()
{

	/* your code here */

	return 0;
}

/* your definitions here */
