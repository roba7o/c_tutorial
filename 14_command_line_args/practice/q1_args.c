/**
 * QUESTION 1 (warm-up): argc and argv
 *
 * Part a) Print argc, then every argument with its index. Run it several ways
 *         and note what you get:
 *
 *             ./q1_args
 *             ./q1_args hello
 *             ./q1_args hello world
 *             ./q1_args "hello world"
 *
 *         argv[0] is not an argument you passed. What is it, and why is argc
 *         therefore never 0 in practice?
 *
 *         The last two runs differ. In a comment, say who split those words
 *         apart -- your program, or something before it.
 *
 * Part b) Make it require exactly two arguments and print a usage message to
 *         stderr and exit(1) otherwise:
 *
 *             USAGE
 *                 q1_args first second
 *
 *         Use fprintf(stderr, ...) rather than printf. Then run:
 *
 *             ./q1_args > /dev/null
 *
 *         The error still appears. That is what stderr is for -- errors do
 *         not vanish when someone redirects your output.
 *
 * Part c) argv is char**. You have met that type twice now: in q3 of section
 *         12, and here.
 *
 *         Print argv[1][0] -- the first character of the second argument.
 *         Then write out in a comment what each of these is, and its type:
 *
 *             argv        argv[1]        argv[1][0]        *argv
 *
 * Part d) The last element of argv is guaranteed to be NULL. Rewrite your
 *         loop to walk argv until it hits NULL, without using argc at all.
 *         This is the same "sentinel value" idea as the '\0' on a string.
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{

	/* your code here */

	return 0;
}
