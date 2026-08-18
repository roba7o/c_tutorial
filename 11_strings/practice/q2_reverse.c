/**
 * QUESTION 2 (medium): modifying strings, and the literal trap
 *
 * Part a) Write:
 *
 *             void reverse_string(char *s);
 *
 *         Reverse it in place. Same two-indices-inward swap you wrote in 09,
 *         except you have to find the length yourself first, and you must not
 *         move the '\0'.
 *
 *         Test on "hello" and on "abcdef" -- odd and even lengths again.
 *
 * Part b) The trap. These two lines look equivalent and are not:
 *
 *             char a[] = "hello";     // a copy, on the stack, writable
 *             char *b  = "hello";     // points at a read-only literal
 *
 *         Call reverse_string on each. Predict what happens to b BEFORE you
 *         run it, then run it.
 *
 *         hello_string_pointer.c has the comment about this but does not
 *         actually run it. You are going to.
 *
 *         In a comment: why does the compiler allow this to build at all?
 *
 * Part c) Write:
 *
 *             int count_words(char *s);
 *
 *         Count words in "the quick brown fox" (4). A word is a run of
 *         non-space characters. Watch out for: leading spaces, trailing
 *         spaces, and two spaces in a row. Test all three.
 *
 *         Do it in ONE pass with a "was the previous character a space"
 *         flag -- do not scan the string repeatedly.
 */
#include <stdio.h>

/* your declarations here */

int main()
{

	/* your code here */

	return 0;
}

/* your definitions here */
