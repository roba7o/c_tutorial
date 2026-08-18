/**
 * QUESTION 2 (medium): generalise exercise.c
 *
 * The exercise.c in 07_looping reads a number of *at most 2 digits* by
 * calling getc three times, with the validation copy-pasted each time.
 * Rewrite it as a loop so it reads a number of ANY length (up to 9
 * digits) with only one copy of the validation logic.
 *
 * Rules:
 *   - read characters with getc(stdin) until you hit '\n'
 *   - for each digit, do: number = number * 10 + (c - '0')
 *   - if a character is not a digit, print "Invalid number!" and return 1
 *   - if the user types nothing but Enter, that is also invalid
 *   - if more than 9 digits are typed, print "Number too long!" and return 1
 *   - otherwise print "Got <number>"
 *
 * Expected sessions:
 *
 *     Please enter a number: 4096
 *     Got 4096
 *
 *     Please enter a number: 7
 *     Got 7
 *
 *     Please enter a number: 12a3
 *     Invalid number!
 *
 *     Please enter a number:
 *     Invalid number!
 *
 * Hints:
 *   - a while(1) loop with a break on '\n' is the natural shape here
 *     (see hello_while.c)
 *   - keep a separate counter for how many digits you have consumed
 *   - work out on paper why number*10 + (c-'0') builds the number up
 *     left to right before you write it
 */
#include <stdio.h>
int main()
{
	int number = 0;
	char c = 0;
	int num_digits = 0;

	printf("Please enter a number: ");

	while (1)
	{
		c = getc(stdin);
		if (c == '\n' && num_digits == 0)
		{
			printf("you need to actually enter a number\n");
			return 1;
		}
		else if (num_digits > 9)
		{
			printf("too many digits.. not enough memory sorry.\n");
			return 1;
		}

		else if (c == '\n')
		{
			break;
		}
		else if (c < '0' || c > '9')
		{
			printf("Invalid number!\n");
			return 1;
		}
		num_digits++;
		number *= 10;
		number += (c - '0');
	}

	printf("Got %d\n", number);

	return 0;
}
