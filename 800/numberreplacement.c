/*
Number Replacement
800
https://codeforces.com/contest/1744/problem/A
*/

#include <stdio.h>

int main(){

	int i, j, t, n, arr[50], num;
	char str[51], let;

	scanf("%d", &t);

	while(t--){
		scanf("%d", &n);

		for(i = 0; i < n; i++) scanf("%d", &arr[i]);

		scanf("%s", str);

		for(i = 0; i < n; i++){
			num = arr[i];
			let = str[i];

			for(j = i; j < n; j++){
				if(arr[j] == num && str[j] != let){
					printf("NO\n");
					break;
				}
			}

			if(j != n) break;
		}

		if(i == n) printf("YES\n");

	}

	return 0;
}
