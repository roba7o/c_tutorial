/**
 * QUESTION 3 (hard): loops inside loops, with state
 *
 * Write a Collatz sequence explorer. The Collatz rule is:
 *
 *     if n is even -> n = n / 2
 *     if n is odd  -> n = 3 * n + 1
 *
 * Repeat until n reaches 1. It always does (nobody has proved why).
 *
 * Your program must:
 *   1. loop forever, each time asking the user for a number
 *      (reuse your digit reader from question 2)
 *   2. if the user enters 0, print "Bye" and exit cleanly
 *   3. otherwise print the whole sequence starting at n, then report
 *      how many steps it took and the largest value reached
 *
 * Expected session:
 *
 *     Enter a number (0 to quit): 6
 *     6 3 10 5 16 8 4 2 1
 *     steps: 8, max: 16
 *     Enter a number (0 to quit): 7
 *     7 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1
 *     steps: 16, max: 52
 *     Enter a number (0 to quit): 0
 *     Bye
 *
 * The catch: you have NOT been taught the modulo operator '%', so you
 * cannot test for evenness with n % 2 == 0. Use integer division
 * instead -- remember from 05_variables that int division throws the
 * remainder away, so:
 *
 *     (n / 2) * 2 == n     is true only when n is even
 *
 * Work through that with n = 6 and n = 7 by hand before you use it.
 *
 * Hints:
 *   - the outer loop is a do-while or while(1); the inner loop walks
 *     the sequence
 *   - "max" starts as the number the user typed, not as 0
 *   - count a step every time you apply the rule, not every number printed
 *   - printf("%d ", n) keeps the sequence on one line; print the
 *     newline yourself once the inner loop ends
 *
 * Stretch: which starting value below 30 gives the longest sequence?
 * Add a third loop that tries every start from 1 to 29 and reports the
 * winner, without printing any of the sequences.
 */
#include <stdio.h>
int main() {

	/* your code here */

	return 0;
}
