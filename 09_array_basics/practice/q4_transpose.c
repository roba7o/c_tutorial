/**
 * QUESTION 4 (hard): transposing and checking a square matrix
 *
 * Part a) Transpose a square matrix IN PLACE -- flip it about its diagonal,
 *         so what was at [i][j] ends up at [j][i]:
 *
 *             1 2 3          1 4 7
 *             4 5 6    ->    2 5 8
 *             7 8 9          3 6 9
 *
 *             void transpose(int m[][N], int n);
 *
 *         with #define N 3.
 *
 *         Write the obvious version first: loop i over every row, j over
 *         every column, swap m[i][j] with m[j][i]. Run it. It will not work.
 *
 *         Work out why before reading on -- it is the same shape of mistake
 *         as reversing an array, and the fix is the same kind of fix. Which
 *         elements does the loop visit twice, and which does it never need
 *         to touch at all?
 *
 * Part b) Write:
 *
 *             int is_magic(int m[][N], int n);
 *
 *         A magic square is one where every row, every column and both
 *         diagonals add up to the same total. Return 1 if it is, 0 if not.
 *
 *         Test with these:
 *
 *             2 7 6          1 2 3
 *             9 5 1          4 5 6      (magic)   (not magic)
 *             4 3 8          7 8 9
 *
 *         Four things to check, so four loops. The two diagonals are the
 *         interesting ones -- work out on paper which indices they visit:
 *
 *             top-left to bottom-right: [0][0] [1][1] [2][2]
 *             top-right to bottom-left: [0][2] [1][1] [2][0]
 *
 *         Write each of those as an expression in i and n.
 *
 *         Return as soon as you know the answer is 0. No point summing the
 *         diagonals if row 1 already failed.
 *
 * Stretch) Multiply two matrices into a third:
 *
 *             void multiply(int a[][N], int b[][N], int out[][N], int n);
 *
 *         out[i][j] is the sum over k of a[i][k] * b[k][j]. Three nested
 *         loops. Do it on paper for 2x2 first or you will not get it.
 */
#include <stdio.h>

#define N 3

/* your declarations here */

int main()
{

	/* your code here */

	return 0;
}

/* your definitions here */
