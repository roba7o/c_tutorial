/**
 * QUESTION 3 (hard): binary files, and a file copy
 *
 * fprintf writes text: the int 1000000 becomes seven characters. fwrite
 * writes the bytes as they sit in memory: the same int becomes 4 bytes.
 * freadwrite.c shows the second kind.
 *
 * Part a) Reuse the player struct idea from 13, but with fixed arrays so the
 *         whole thing is self-contained:
 *
 *             typedef struct {
 *                 char name[32];
 *                 int  scores[5];
 *                 int  num_scores;
 *             } player;
 *
 *         Make an array of 4, fwrite them to "players.bin", read them back
 *         into a fresh array with fread, and confirm every field survived.
 *
 *         Check the return of fread. It tells you how many OBJECTS it read,
 *         not bytes -- so a short read is detectable.
 *
 * Part b) Compare the two formats. Write the same 4 players out as text with
 *         fprintf as well, then:
 *
 *             ls -l players.bin players.txt
 *             cat players.bin
 *             cat players.txt
 *
 *         In a comment, give one advantage each way. Include what happens to
 *         a binary file if you later add a field to the struct.
 *
 * Part c) Why does the struct from 13 -- the one holding char *name and
 *         int *scores -- break completely if you fwrite it?
 *
 *         Work out what actually lands in the file for those two members, and
 *         why reading it back in a different run gives you nonsense at best.
 *         This is the single biggest gotcha with binary serialisation.
 *
 * Part d) Write a file copier that works on any file, text or binary:
 *
 *             ./q3_binary source dest
 *
 *         Read into a char buffer[4096] with fread, write with fwrite, loop
 *         until fread returns 0. Note the return value tells you how much to
 *         write -- the last block is almost never full.
 *
 *         Verify with:  cmp source dest
 *
 *         Test it on a binary: copy the q3_binary executable itself and check
 *         the copy still runs after chmod +x.
 *
 * Stretch) Time your copier against cp on a large file. If yours is much
 *          slower, try a bigger buffer and work out why that helps.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* your declarations here */

int main(int argc, char **argv)
{

	/* your code here */

	return 0;
}

/* your definitions here */
