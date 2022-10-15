/*
Gravity Flip
900
https://codeforces.com/problemset/problem/405/A
 */

#include <stdio.h>
#include <stdlib.h>

void sort(int *array, int size)
{

	int i, j, aux;

	for (j = 0; j < size; j++)
	{
		for (i = j + 1; i < size; i++)
		{
			if (array[i] < array[j])
			{
				aux = array[i];
				array[i] = array[j];
				array[j] = aux;
			}
		}
	}

	return;
}

int main()
{

	int i, n, *a;

	scanf("%d", &n);
	a = malloc(sizeof(int) * n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	sort(a, n);

	for(i = 0; i < n; i++) printf("%d ", a[i]);
	printf("\n");

	return 0;
}
