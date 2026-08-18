/**
 * QUESTION 3 (hard): pointers into a string
 *
 * A tokeniser splits "the quick brown fox" into separate strings. The C way
 * is not to copy anything -- you overwrite each space with '\0' and keep an
 * array of pointers to where each word starts.
 *
 * index_intro_strings.c is the key idea: writing a '\0' into the middle of a
 * string makes it end early, and a pointer to any position inside it is
 * itself a valid string.
 *
 * Part a) Write:
 *
 *             int tokenise(char *s, char *words[], int max_words);
 *
 *         It fills words[] with pointers to the start of each word, writes
 *         '\0' over each space, and returns how many words it found.
 *         Stop early if you hit max_words.
 *
 *         Then print each word on its own line from main.
 *
 *             char text[] = "the quick brown fox";
 *             char *words[10];
 *             int n = tokenise(text, words, 10);
 *
 *         Note text must be char[] not char* -- part b of q2 explains why.
 *
 * Part b) Print text itself with printf("%s\n", text) AFTER tokenising.
 *         Explain what you see in a comment.
 *
 *         Then print all 20 bytes of it one at a time with %c, replacing any
 *         '\0' with a visible character so you can see the structure.
 *
 * Part c) Write:
 *
 *             char *find_longest(char *words[], int count);
 *
 *         Returns a pointer to the longest word. Reuse my_strlen from q1.
 *         Note the return type -- you are handing back a pointer INTO text,
 *         not a copy. What happens to it if text goes out of scope?
 *
 * Stretch) Write your own strchr:
 *
 *             char *my_strchr(char *s, char c);
 *
 *         Returns a pointer to the first occurrence, or NULL. Then use it to
 *         redo string_functions.c's replace loop with your own version.
 */
#include <stdio.h>

/* your declarations here */

int main()
{

	/* your code here */

	return 0;
}

/* your definitions here */
