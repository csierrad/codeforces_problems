/*
Mahmoud and a Triangle
1000
https://codeforces.com/problemset/problem/766/B
*/

#include <stdio.h>
#include <stdlib.h>


int cmp (const void *x,const void *y)
{
	return *(int*)x-*(int*)y;
}

int main(){

	int n, i, j, k, s[100001];

	scanf("%d", &n);

	for(i = 0; i < n; i++){
		scanf("%d", &s[i]);
	}

	qsort(s,n,sizeof(s[0]),cmp);

	for(i = 1; i < n - 1; i++){
		if(s[i - 1] + s[i] > s[i + 1]){
			printf("YES\n");
			return 0;
		}
	}

	printf("NO\n");

	return 0;
}
