/**
 * QUESTION 3 (medium): 2D arrays
 *
 * Part a) Declare int table[12][12] and fill it so table[i][j] holds
 *         (i+1) * (j+1). Print it as a 12x12 grid using "%4d" so the columns
 *         line up, with a newline after each row.
 *
 * Part b) Move the printing into a function:
 *
 *             void print_grid(int g[][COLS], int rows);
 *
 *         with #define COLS 12 at the top of the file.
 *
 *         Try writing it as int g[][] first and read the error the compiler
 *         gives you. Then work out why the column count is required but the
 *         row count is not.
 *
 * Part c) Write:
 *
 *             void row_sums(int g[][COLS], int rows);
 *             void col_sums(int g[][COLS], int rows);
 *
 *         row_sums prints the total of each row, col_sums the total of each
 *         column. The two functions look nearly identical -- the only
 *         difference is which index the inner loop moves. Make sure you can
 *         say out loud which one that is before you write the second.
 *
 *         For the 12x12 times table, row 1 should total 78. Check it.
 *
 * Stretch) Print the grid with a header row and column down the edges, so it
 *          reads like a real times table:
 *
 *                 1   2   3   4 ...
 *             1   1   2   3   4
 *             2   2   4   6   8
 *             3   3   6   9  12
 */
#include <stdio.h>

#define COLS 12

/* your declarations here */

int main()
{

	/* your code here */

	return 0;
}

/* your definitions here */
