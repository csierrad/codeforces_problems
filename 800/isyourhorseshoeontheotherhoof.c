/*
Is your horseshoe on the other hoof?
800
https://codeforces.com/problemset/problem/228/A
 */

#include <stdio.h>

int main()
{
	int i, j = 1, n, diff[4] = {0, 0, 0, 0};
	char c;

	scanf("%d%c", &n, &c);
	diff[0] = n;

	while(c != 10 && j <= 3){
		scanf("%d%c", &n, &c);
		for(i = 0; i < 4; i++){
			if(n == diff[i]){
				break;
			}
			if(i == 3){
				diff[j] = n;
				j++;
			}
		}
	}

	printf("%d\n", 4 - j);

	return 0;
}