/**
 * reverse_array - Reverses the content of an array of integers
 *
 * @a: - Array to reverse
 *
 * @n: - Size of array
 */
void reverse_array(int *a, int n)
{
	int start = 0;

	int end = n - 1;

	while (start < end)
	{
		int temp = a[start];

		a[start] = a[end];

		a[end] = temp;

		start++;
		end--;
	}
}
