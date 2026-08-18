/**
 * QUESTION 2 (hard): memoized fibonacci
 *
 * In 08 your recursive fib took 150,049 calls to compute fib(25), because
 * every branch re-solved subproblems other branches had already done. Now you
 * have arrays, so you can remember them.
 *
 * Part a) Write:
 *
 *             int fib(int n, int cache[]);
 *
 *         In main, declare the cache and set every slot to -1, meaning "not
 *         computed yet". Then fib works like this:
 *
 *             - if cache[n] is not -1, the answer is already known: return it
 *             - otherwise compute it as before, STORE it in cache[n], return it
 *
 *         Why -1 as the marker and not 0? Look at what fib(1) is.
 *
 *         How big does the cache need to be if you want to call fib(25)?
 *         Careful -- you index it with n itself.
 *
 *         Print fib(1) to fib(25) from main and check the last one is 46368.
 *
 * Part b) Put printf("call\n") back as the first line of fib, and count again:
 *
 *             ./q2_memo | wc -l
 *
 *         Compare against 150,049. Note the number in a comment.
 *
 * Part c) The important bit. You passed the cache IN from main rather than
 *         declaring it inside fib. Try moving it inside:
 *
 *             int fib(int n) {
 *                 int cache[26];
 *                 ...
 *             }
 *
 *         Work out what goes wrong before you write it. When does that array
 *         come into existence, and when does it die? hello_scope.c in
 *         07_looping is the relevant lesson.
 *
 *         Then answer this in a comment: main declares the cache, fib fills it
 *         in, and main can see the changes afterwards -- even though C copies
 *         every argument. Why does that work for an array when it would not
 *         work for a plain int?
 *
 * Stretch) Print the cache from main after computing fib(25). Which slots are
 *          still -1, and does that tell you anything about which subproblems
 *          the recursion actually needed?
 */
#include <stdio.h>

/* your declarations here */

int main()
{

	/* your code here */

	return 0;
}

/* your definitions here */
