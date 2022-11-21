/*
Even-Odd Increments
800
https://codeforces.com/contest/1744/problem/B
*/

#include <stdio.h>

int main(){

	int i, t, n, q, a[100001], qs[2], even;
	long long int sum;

	scanf("%d", &t);

	while(t--){
		scanf("%d %d", &n, &q);

		for(i = sum = even = 0; i < n; i++){
			scanf("%d", &a[i]);

			sum += (long long int)a[i];
			if(a[i] % 2 == 0) even++;
		}

		for(i = 0; i < q; i++){
			scanf("%d %d", &qs[0], &qs[1]);

			if(qs[0] == 0){
				sum += qs[1] * (long long int)even;
				printf("%lld\n", sum);

				if(qs[1] % 2 == 1) even = 0;
				
			} else{
				sum += qs[1] * (n - even);
				printf("%lld\n", sum);

				if(qs[1] % 2 == 1) even = n;
			}
		}
	}

	return 0;
}
