/**
 * QUESTION 3 (hard): structs that own memory
 *
 * nested_structs.c builds a screen holding a malloced array of pixels, with
 * screen_new and screen_free as a matching pair. That new/free pairing is how
 * C does what other languages call a constructor and destructor, and getting
 * it right is most of what writing safe C is.
 *
 * Part a) Build this:
 *
 *             typedef struct {
 *                 char *name;      // malloced, not a fixed array
 *                 int  *scores;    // malloced array
 *                 int  num_scores;
 *             } player;
 *
 *             player *player_new(char *name, int num_scores);
 *             void    player_free(player *p);
 *             void    player_print(player *p);
 *
 *         player_new mallocs the struct AND both of its members, and copies
 *         the name in with strncpy. player_free must undo all three, in the
 *         right order.
 *
 *         Get the order wrong on purpose once -- free(p) before free(p->name)
 *         -- and say in a comment why that is not merely untidy but a
 *         use-after-free.
 *
 * Part b) Verify it with:
 *
 *             leaks -atExit -- ./q3_nested
 *
 *         Then comment out ONE of the three frees and run it again. Each
 *         should show a different leak size. Record all three.
 *
 * Part c) Write:
 *
 *             player *player_copy(player *p);
 *
 *         A copy whose scores can be changed without affecting the original.
 *
 *         First write the WRONG version -- player *c = malloc(sizeof(player));
 *         *c = *p; -- then change c->scores[0] and print p->scores[0].
 *
 *         That is a shallow copy: the struct got duplicated, the things it
 *         points at did not. In a comment, connect this to Python's
 *         copy vs copy.deepcopy. It is the identical problem.
 *
 * Part d) Add a team struct holding an array of player pointers, plus
 *         team_new and team_free. Confirm with leaks that a team of 3 players
 *         frees cleanly.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* your declarations here */

int main()
{

	/* your code here */

	return 0;
}

/* your definitions here */
