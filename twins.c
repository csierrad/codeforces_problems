/*
Twins
900
https://codeforces.com/problemset/problem/160/A
 */

#include <stdio.h>

void sort(int *array, int size)
{
	int i, j = 0, aux;

	while (j < size / 2)
	{
		for (i = j; i < size - j; i++)
		{
			if (array[i] > array[j])
			{
				aux = array[j];
				array[j] = array[i];
				array[i] = aux;
			}

			if (array[i] < array[size - 1 - j])
			{
				aux = array[size - 1 - j];
				array[size - 1 - j] = array[i];
				array[i] = aux;
			}
		}
		j++;
	}

	return;
}

int main()
{

	int i, j, n, sum1, sum2, array[100];

	scanf("%d ", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}

	sort(array, n);

	for (j = 1; j <= n; j++)
	{
		for (i = 0, sum1 = 0, sum2 = 0; i < n; i++)
		{
			if (i < j)
				sum1 += array[i];
			else
				sum2 += array[i];
		}
		
		if (sum1 > sum2)
		{
			printf("%d\n", j);
			return 0;
		}
	}

	return 0;
}