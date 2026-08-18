/**
 * QUESTION 1 (warm-up): strings are just char arrays with a '\0' on the end
 *
 * Part a) Write these WITHOUT including <string.h>:
 *
 *             int my_strlen(char *s);
 *             void my_strcpy(char *dest, char *src);
 *
 *         my_strlen walks forward until it finds '\0' and returns how many
 *         characters came before it. Test on "hello" (5) and "" (0).
 *
 *         Note what my_strlen does NOT do: it does not know the size of the
 *         array. It trusts that a '\0' is in there somewhere. That trust is
 *         the whole security history of C in one sentence.
 *
 * Part b) Look at hello_string.c. Two of those five arrays print rubbish
 *         after the word. Before running it, work out which two and why.
 *         Then run it.
 *
 *         Write the byte contents of c[5] and e[] out by hand in a comment,
 *         showing where the '\0' is or is not.
 *
 * Part c) How big does dest have to be for my_strcpy to be safe? Write the
 *         answer in a comment, in terms of my_strlen(src).
 *
 *         Then do it wrong on purpose: copy "hello world" into char small[5]
 *         and see what happens. Rebuild with -fsanitize=address in CFLAGS if
 *         it appears to work fine -- it did not.
 */
#include <stdio.h>

/* your declarations here */

int main()
{

	/* your code here */

	return 0;
}

/* your definitions here */
