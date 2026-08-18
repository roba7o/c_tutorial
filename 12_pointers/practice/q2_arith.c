/**
 * QUESTION 2 (medium): pointer arithmetic
 *
 * In 09 you worked out that a[i] compiles to "base + i * sizeof(element)".
 * Pointer arithmetic is that formula written out by hand.
 *
 * Part a) Prove the two are the same thing. For an int a[5]:
 *
 *             printf("%d %d\n", a[2], *(a + 2));
 *
 *         Print all five both ways. They are not merely equal -- a[i] is
 *         DEFINED as *(a + i) by the language.
 *
 *         Fun consequence: *(a + 2) is the same as *(2 + a), so 2[a] is legal
 *         C and prints a[2]. Try it. Never use it.
 *
 * Part b) a + 1 does not add 1 to the address. Print these and work out the
 *         gaps, as pointer_array.c does:
 *
 *             int    *ip;    // gap between ip and ip+1 is ?
 *             char   *cp;    // ?
 *             double *dp;    // ?
 *
 *         In a comment: what does the compiler have to know to work this out,
 *         and why can you therefore not do arithmetic on a void*?
 *
 * Part c) Rewrite this loop using only a moving pointer -- no index variable
 *         and no [ ] anywhere:
 *
 *             for (int i = 0; i < n; i++)
 *                 printf("%d ", a[i]);
 *
 *         Walk a pointer from a to a + n. This is how most real C string and
 *         array code is written.
 *
 * Part d) Subtracting two pointers gives the number of ELEMENTS between them,
 *         not bytes. Given a pointer to the middle of an array and a pointer
 *         to its start, print the index. Check it against what you expect.
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
