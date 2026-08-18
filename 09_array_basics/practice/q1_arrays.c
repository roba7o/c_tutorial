/**
 * QUESTION 1 (warm-up): filling and scanning arrays
 *
 * Part a) Declare int squares[10]. Fill it with 1, 4, 9, 16 ... 100 using a
 *         loop, then print it on one line.
 *
 *         Then, at the end, add one more line:
 *
 *             printf("%d\n", squares[10]);
 *
 *         That index does not exist -- the last valid one is 9. Predict what
 *         happens BEFORE you run it (crash? error? something else?), then run
 *         it. Write what actually happened in a comment.
 *
 *         Then delete that line. Never leave it in.
 *
 * Part b) Write a function:
 *
 *             void report_max(int values[], int count);
 *
 *         It scans the array once and prints the largest value AND the index
 *         it was found at. Do not sort anything.
 *
 *         Test it on {3, 17, 4, 9, 17, 2} -- note there are two 17s, so decide
 *         what your code should do and make sure it actually does that.
 *
 *         What should "max so far" start as, before you have looked at
 *         anything? Starting it at 0 is a trap -- work out why.
 *
 * Part c) Reverse an array in place: {1,2,3,4,5} becomes {5,4,3,2,1}. No
 *         second array allowed -- swap elements from the ends inwards.
 *
 *         Two things to work out on paper first: how many swaps for 5
 *         elements, and how many for 6? What does the loop stop at?
 *
 * Stretch) Declare int table[12][12], fill it with the times tables so that
 *          table[i][j] is (i+1)*(j+1), and print it as a grid.
 *          "%4d" instead of "%d" will keep the columns lined up.
 */
#include <stdio.h>

/* your declarations here */
void squarer(int arr[], int len_a);
void report_max(int values[], int count);
void swapper(int arr[], int len_a);
void times_tables(int matx[][12], int m_len);
void print_grid(int matx[][12], int m_len);

int main()
{
	// Question 1
	// int len_a = 5;
	// int arr[len_a];
	// squarer(arr, len_a);
	// for (int i = 0; i < 5; i++)
	// {
	// 	printf("%d ", arr[i]);
	// }
	// printf("%d ", arr[5]);

	// Question 2
	// int a[] = {3, 17, 4, 9, 17, 2};
	// report_max(a, sizeof(a) / sizeof(a[0]));

	// Question 3
	// int a_r[] = {3, 17, 4, 9, 17, 2, 7, 99};
	// int a_9[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	// int a_8[] = {1, 2, 3, 4, 5, 6, 7, 8};

	// swapper(a_r, sizeof(a_r) / sizeof(a_r[0]));
	// swapper(a_9, sizeof(a_9) / sizeof(a_9[0]));
	// swapper(a_8, sizeof(a_8) / sizeof(a_8[0]));

	// extra

	int table[12][12];
	// int g[][];

	times_tables(table, 12);
	// times_tables(g, 12);

	print_grid(table, 12);

	return 0;
}

/* your definitions here */

void times_tables(int matx[][12], int m_len)
{
	for (int i = 0; i < m_len; i++)
	{
		for (int j = 0; j < m_len; j++)
		{
			matx[i][j] = (i + 1) * (j + 1);
		}
	}
}

void print_grid(int matx[][12], int m_len)
{
	for (int i = 0; i < m_len; i++)
	{
		for (int j = 0; j < m_len; j++)
		{
			printf("%4d", matx[i][j]);
		}
		printf("\n");
	}
}

void squarer(int arr[], int len_a)
{
	for (int i = 0; i < len_a; i++)
	{
		arr[i] = i * i;
	}
}

void report_max(int values[], int count)
{
	int max_so_far = values[0];
	int max_index = 0;
	for (int i = 1; i < count; i++)
	{
		if (values[i] > max_so_far)
		{
			max_so_far = values[i];
			max_index = i;
		}
	}
	// Will report first instance of a equal high <= would result in last
	printf("The max value is: %d and is at index: %d\n", max_so_far, max_index);
}

void swapper(int arr[], int len_a)
{
	printf("The original array is: \n");
	for (int j = 0; j < len_a; j++)
	{
		printf("%d ", arr[j]);
	}

	int half_way = len_a / 2;
	printf("Halfway: %d, lena: %d", half_way, len_a);

	for (int i = 0; i < half_way; i++)
	{
		int old_left = arr[i];
		arr[i] = arr[len_a - i - 1];
		arr[len_a - i - 1] = old_left;

		printf("\nold left is %d\n", old_left);
		printf("far right is %d\n", arr[len_a - i - 1]);
	}

	printf("\n");
	printf("The array backwards is: \n");
	for (int j = 0; j < len_a; j++)
	{
		printf("%d ", arr[j]);
	}
	printf("\n\n");
}
