/*
Candies
900
https://codeforces.com/problemset/problem/1343/A
 */

#include <stdio.h>
#include <math.h>

int main()
{

	int t, n, i, sum;

	scanf("%d", &t);

	while(t--){
		
		scanf("%d", &n);

		for(i = 2; i < 30; i++){
			sum = (1 << i) - 1;
			if(n % sum == 0){
				printf("%d\n", n / sum);
				break;
			}
		}
	}

	return 0;
}