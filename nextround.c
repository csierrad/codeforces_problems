/*
Next Round
800
https://codeforces.com/problemset/problem/158/A
*/

#include <stdio.h>

int main()
{
	int n, k, i, aux = 0;
	int score[50];

	scanf("%d %d", &n, &k);

	for (i = 0; i < n; i++)
	{
		scanf("%d ", score + i);
	}

	while(score[aux] >= score[k - 1] && score[aux] > 0 && aux < n){
		aux++;
	}

	printf("%d\n", aux);
	return 0;
}