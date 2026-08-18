/**
 * QUESTION 2 (medium): arrays of structs
 *
 * Part a) Make an array of 5 students, filled in at declaration:
 *
 *             student class[5] = {
 *                 {"Ada", 2, 3.9},
 *                 ...
 *             };
 *
 *         Write and use:
 *
 *             void print_class(student *c, int count);
 *             double average_gpa(student *c, int count);
 *
 *         Note print_class takes student* rather than student[] -- by now you
 *         know those are the same thing in a parameter list.
 *
 * Part b) Write:
 *
 *             student *find_best(student *c, int count);
 *
 *         Returns a pointer to the highest-GPA student. Same scan-with-state
 *         shape as report_max in 09, but returning a pointer rather than a
 *         value.
 *
 *         Why return a pointer rather than a copy of the struct? Give two
 *         reasons in a comment -- one about cost, one about what the caller
 *         can then do.
 *
 * Part c) Write:
 *
 *             void sort_by_gpa(student *c, int count);
 *
 *         Any sort you like -- bubble sort is fine, this is not an algorithms
 *         exercise. The point is that you are swapping whole structs:
 *
 *             student tmp = c[i];
 *             c[i] = c[j];
 *             c[j] = tmp;
 *
 *         That plain = copies every byte of the struct, padding included. It
 *         is the one place C will copy an aggregate for you -- note that it
 *         will NOT do this for arrays.
 *
 * Part d) After sorting, is the pointer returned by find_best in part b still
 *         pointing at the best student? Test it. Explain in a comment.
 */
#include <stdio.h>

/* your declarations here */

int main()
{

	/* your code here */

	return 0;
}

/* your definitions here */
