/**
 * QUESTION 2 (medium): validating what the user typed
 *
 * Everything in argv is a string. "42" is not the number 42, and the user is
 * free to type "hello", "9999999999999999999", or nothing at all.
 *
 * Part a) Build a calculator taking exactly three arguments:
 *
 *             ./q2_calc 6 + 7        ->  6 + 7 = 13
 *             ./q2_calc 10 / 4       ->  10 / 4 = 2
 *             ./q2_calc 10 x 4       ->  Unknown operator: x
 *
 *         Use strtol with full checking, exactly as int_arg.c does:
 *           - set errno = 0 before the call
 *           - check *endptr is 0, so the WHOLE string was consumed
 *           - check errno for ERANGE
 *           - check the result fits in an int against INT_MAX / INT_MIN
 *
 *         Write that as one function you call twice:
 *
 *             int parse_int(char *s, int *out);   // returns 1 ok, 0 failed
 *
 *         That out-parameter shape is the one you built in q3 of section 12.
 *
 * Part b) Multiplication needs care with your shell. Work out why
 *
 *             ./q2_calc 6 * 7
 *
 *         does something surprising in a directory with files in it, and what
 *         you must type instead. Note it in a comment -- this is a shell
 *         behaviour, not a C one, and it catches everybody once.
 *
 * Part c) Handle division by zero without crashing. Print an error to stderr
 *         and exit(1).
 *
 *         Then try it WITHOUT the check to see what an integer divide by zero
 *         actually does. It is not like floating point -- there is no "inf",
 *         the CPU raises a fault and your process dies.
 *
 * Part d) Why does strtol return long rather than int? Look at what it must
 *         be able to represent in order to report ERANGE meaningfully.
 */
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <errno.h>

/* your declarations here */

int main(int argc, char **argv)
{

	/* your code here */

	return 0;
}

/* your definitions here */
