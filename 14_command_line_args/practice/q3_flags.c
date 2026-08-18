/**
 * QUESTION 3 (hard): parsing real command line flags
 *
 * Real tools take flags in any order, some with values attached:
 *
 *     ./q3_flags -n 5 -v hello.txt
 *     ./q3_flags hello.txt -v -n 5
 *     ./q3_flags -v
 *
 * Part a) Support these:
 *
 *             -n NUMBER    a count, default 1
 *             -v           verbose on/off, default off
 *             -o FILE      an output name, default "out.txt"
 *             anything not starting with '-' is the input filename
 *
 *         Walk argv from index 1. When you see a flag that takes a value, the
 *         value is the NEXT argument -- so you consume two and skip ahead.
 *
 *         Print the final settings and exit. You are not opening any files
 *         yet; that is section 15.
 *
 * Part b) Every one of these must produce a clear error, not a crash:
 *
 *             ./q3_flags -n              (flag at the end, no value follows)
 *             ./q3_flags -n abc          (value is not a number)
 *             ./q3_flags -z              (unknown flag)
 *             ./q3_flags a.txt b.txt     (two input files)
 *
 *         The first is the interesting one. Reading argv[i+1] when i is the
 *         last index is an out-of-bounds read -- the exact bug class from 09,
 *         now reachable by anyone who runs your program. Guard it against
 *         argc BEFORE you read it.
 *
 * Part c) Comparing flags means comparing strings, and you cannot use == on
 *         them -- that compares addresses, as you found in 09.
 *
 *         Write your own rather than using strcmp:
 *
 *             int str_eq(char *a, char *b);    // 1 if equal, 0 if not
 *
 *         Walk both until they differ or both hit '\0'.
 *
 * Part d) Reuse parse_int from q2 for the -n value. If you find yourself
 *         copy-pasting it, note in a comment what you would do about that in
 *         a real project -- section 18 is about exactly this.
 *
 * Stretch) Support combined short flags, so -vn 5 means the same as -v -n 5.
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
