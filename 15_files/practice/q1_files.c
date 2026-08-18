/**
 * QUESTION 1 (warm-up): opening, writing, reading, closing
 *
 * Part a) Write "scores.txt" containing:
 *
 *             Ada 91
 *             Grace 88
 *             Alan 95
 *
 *         using fopen, fprintf and fclose. Then open it again for reading and
 *         read the three pairs back with fscanf("%s %d") and print them.
 *
 *         Every fopen can fail. Check for NULL and report to stderr with
 *         errno, exactly as hello_files.c does. Then prove your check works by
 *         trying to open a file that does not exist for reading.
 *
 * Part b) The mode string matters. Run your writer three times with each of
 *         these and check the file contents after each run:
 *
 *             "w"    "a"    "r"
 *
 *         In a comment: which one silently destroys data, and which one fails
 *         if the file is missing? Note that "w" truncates the file the moment
 *         it opens, before you write a single byte.
 *
 * Part c) Delete the fclose from your writer and run it. Then look at the
 *         file. Depending on timing, some or all of your text may not be
 *         there.
 *
 *         The reason is buffering: fprintf does not write to disk, it writes
 *         to a buffer that gets flushed later. fclose flushes it. In a
 *         comment, say why this is a performance decision and what fflush is.
 *
 * Part d) Print the return value of fprintf and of fclose. Both report
 *         success or failure and both are almost universally ignored. What
 *         could make an fclose fail?
 */
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main()
{

	/* your code here */

	return 0;
}
