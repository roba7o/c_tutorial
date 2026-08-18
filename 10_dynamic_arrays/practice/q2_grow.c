/**
 * QUESTION 2 (medium): a growing array
 *
 * Arrays in Python grow when you append. C ones do not. You are going to
 * build that behaviour yourself -- it is what a Python list does internally.
 *
 * Part a) Keep three things:
 *
 *             int *data;      // the malloced block
 *             int count;      // how many values are actually in it
 *             int capacity;   // how many it could hold before growing
 *
 *         Start with capacity 4. Read integers from the user until they type
 *         0. Each time count reaches capacity, DOUBLE the capacity with
 *         realloc and carry on.
 *
 *         Print the capacity each time it changes, then print all the values
 *         at the end. Free before returning.
 *
 * Part b) Use the tmp pattern from hello_realloc.c:
 *
 *             tmp = realloc(data, ...);
 *             if (tmp == NULL) { ... }
 *             data = tmp;
 *
 *         Then work out what would go wrong with:
 *
 *             data = realloc(data, ...);
 *
 *         if the realloc failed. Answer in a comment. It is a real bug with a
 *         name, and it is why the tmp variable exists.
 *
 * Part c) Why double the capacity rather than add 1 each time? Count the
 *         reallocs needed to reach 1000 elements under each strategy. You do
 *         not need to write it -- do the arithmetic and put the two numbers
 *         in a comment.
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
