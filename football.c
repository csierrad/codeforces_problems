/*
Football
1000
https://codeforces.com/problemset/problem/43/A
*/

#include <stdio.h>
#include <string.h>

int main(){

	int i, n, t;
	char str[11], t1[11], t2[11];

	scanf("%d", &n);
	scanf("%s", t1);

	for(i = 1, t = 1; i < n; i++){
		scanf("%s", str);
		
		if(*str != *t1) strcpy(t2, str);

		if(*t1 == *str) t++;
	}
	printf("%s\n", (t > n / 2) ? t1 : t2);

	return 0;
}
