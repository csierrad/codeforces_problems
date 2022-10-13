/*
Remove Samllest
800
https://codeforces.com/problemset/problem/1399/A
 */

#include <stdio.h>
#include <stdlib.h>

void sort(int *array, int size)
{

	int i, j = 0, aux;

	while (j < size / 2)
	{
		for (i = j; i < size - j; i++)
		{
			if (array[i] < array[j]){
				aux = array[j];
				array[j] = array[i];
				array[i] = aux;	
			}
				
			if (array[i] > array[size - 1 - j]){
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

	int i, t, n, array[50];

	scanf("%d", &t);

	while (t--)
	{
		scanf("%d", &n);
		for (i = 0; i < n; i++){
			scanf("%d", array + i);
		}

		sort(array, n);

		for (i = 0; i < n - 1; i++){
			if(abs(array[i] - array[i + 1]) > 1){
				printf("NO\n");
				break;
			}
		}
		
		if(i == n - 1) printf("YES\n");

	}

	return 0;
}