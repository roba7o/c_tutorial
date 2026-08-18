/**
 * QUESTION 3 (hard): dynamic matrices and freeing them properly
 *
 * In 09 a matrix was int m[3][3] -- one flat block, size fixed at compile
 * time. A dynamic one is different: an array of POINTERS, each pointing at a
 * separately malloced row. create_matrix.c shows the shape.
 *
 * Part a) Write these three, following create_matrix.c:
 *
 *             int **matrix_new(int rows, int cols);
 *             void matrix_free(int **m, int rows);
 *             void matrix_print(int **m, int rows, int cols);
 *
 *         Make a 4x6 matrix where m[i][j] = i * 10 + j, print it, free it.
 *
 *         Note matrix_free needs the row count and matrix_print needs both.
 *         Work out why free needs rows but not cols.
 *
 * Part b) Write:
 *
 *             int **matrix_transpose(int **m, int rows, int cols);
 *
 *         It returns a NEW rows-by-cols-swapped matrix and leaves the
 *         original alone. Unlike 09 you are not restricted to square
 *         matrices -- transposing 4x6 gives you 6x4.
 *
 *         Free both when done.
 *
 * Part c) This layout is NOT the same as int m[4][6]. In 09 the whole thing
 *         was one contiguous block. Here the rows can be anywhere in memory.
 *
 *         Prove it: print the address of each row with printf("%p\n", m[i])
 *         for both a dynamic matrix and a static one (use &s[i][0] for the
 *         static). Are the gaps between rows the same each time?
 *
 *         In a comment, say what this costs you at runtime. Think about what
 *         the CPU has to do to reach m[2][3] in each case.
 *
 * Part d) Break the free deliberately: call free(m) WITHOUT first freeing the
 *         rows. Run it under:  leaks -atExit -- ./q3_matrix
 *
 *         How many bytes leak, and why does the leak scale with rows?
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
