/**
 * QUESTION 2 (medium): reading a file you did not write
 *
 * Part a) Take the filename from the command line, joining section 14 to this
 *         one:
 *
 *             ./q2_read numbers.txt
 *
 *         Check argc, print a usage message to stderr if it is wrong.
 *
 * Part b) Make a file of integers, one per line, some negative. Read them all
 *         and print the count, the total, the mean, the smallest and the
 *         largest.
 *
 *         The loop shape is the important part:
 *
 *             while (fscanf(f, "%d", &x) == 1) { ... }
 *
 *         fscanf returns how many items it successfully matched. Test the
 *         return value, never assume it worked. Put a word in the middle of
 *         your file and watch where it stops.
 *
 *         Seed your min and max from the first value read, not from 0 -- the
 *         same trap as report_max in 09, and negatives will catch you.
 *
 * Part c) Now count lines, words and characters in a text file -- a small wc.
 *
 *         fscanf is the wrong tool here. Use getc(f) in a loop until it
 *         returns EOF, which is the same shape as your digit reader from 07.
 *
 *         Note that getc returns int, not char, precisely so it can return
 *         EOF as a value distinct from every possible byte. Declare it int.
 *         In a comment, say what breaks if you declare it char.
 *
 * Part d) Run your wc on its own source file and compare against the real one:
 *
 *             ./q2_read q2_read.c
 *             wc q2_read.c
 *
 *         If your numbers differ, work out whose definition of a word or a
 *         line is different. A file not ending in a newline is a classic
 *         source of an off-by-one here.
 */
#include <stdio.h>
#include <stdlib.h>

/* your declarations here */

int main(int argc, char **argv)
{

	/* your code here */

	return 0;
}

/* your definitions here */
