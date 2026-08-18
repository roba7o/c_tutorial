/**
 * QUESTION 1 (warm-up): structs, and the copy again
 *
 * Part a) Define, with typedef so you do not need the struct keyword:
 *
 *             typedef struct {
 *                 char name[32];
 *                 int  year;
 *                 double gpa;
 *             } student;
 *
 *         Make one, fill it in, and write:
 *
 *             void print_student(student s);
 *
 * Part b) Inside print_student, change s.year to 9999 and print it. Then
 *         print the original back in main.
 *
 *         You have seen this exact behaviour twice now -- for an int in 08,
 *         and here for a whole struct. Note in a comment how many bytes were
 *         copied by that call (use sizeof).
 *
 * Part c) Now write:
 *
 *             void promote_student(student *s);
 *
 *         which adds 1 to the year and actually sticks. Inside it you need
 *         s->year, not s.year. In a comment write out what s->year is
 *         shorthand for, using * and . -- it is exactly one thing.
 *
 * Part d) Print sizeof(student) and add up the sizes of the three fields by
 *         hand. They will not match.
 *
 *         The gap is called padding: the compiler aligns fields so the CPU
 *         can load them in one go. Try reordering the fields and print the
 *         size again -- the same three fields can give different totals.
 */
#include <stdio.h>

/* your declarations here */

int main()
{

	/* your code here */

	return 0;
}

/* your definitions here */
