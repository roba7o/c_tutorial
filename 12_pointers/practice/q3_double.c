/**
 * QUESTION 3 (hard): why int** exists
 *
 * pointer_pass.c has f_broken and f_working. This question is that lesson,
 * built rather than read.
 *
 * Part a) Write:
 *
 *             void grow_broken(int *a, int new_size);
 *             void grow_working(int **a, int new_size);
 *
 *         Both should realloc the caller's array to new_size. Only one can.
 *
 *         Print the pointer value (%p) before the call, inside the function,
 *         and after the call, for both versions. The broken one shows you
 *         exactly where the new address gets lost.
 *
 *         In a comment, finish this sentence precisely: "grow_broken cannot
 *         work because the thing it received was a copy of ..."
 *
 * Part b) Same idea, allocating rather than growing:
 *
 *             int alloc_array(int **out, int n);
 *
 *         It mallocs n ints, writes the address into *out, and returns 1 on
 *         success or 0 if malloc failed. Call it as:
 *
 *             int *a = NULL;
 *             if (!alloc_array(&a, 10)) { ... }
 *
 *         This is an extremely common real-world C shape: return value is the
 *         status, the actual result comes back through a pointer argument.
 *         Note it lets you report failure AND produce a value at once.
 *
 * Part c) Draw the three-box diagram in a comment for the grow_working call:
 *         the int array, the int* in main, and the int** parameter. Label
 *         which box each arrow starts and ends at.
 *
 *         If you can draw that, you understand pointers. If you cannot, you
 *         will keep guessing at & and * forever.
 *
 * Stretch) Write:
 *
 *             void free_and_null(int **p);
 *
 *         It frees *p and then sets *p to NULL. Why is a plain free(p) unable
 *         to do the NULLing part? And why would you want it to?
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
