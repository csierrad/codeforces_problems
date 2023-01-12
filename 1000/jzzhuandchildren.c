/*
Jzzhu and Children
1000
https://codeforces.com/problemset/problem/450/A
*/

#include <stdio.h>

int main(){

	int i, n, m, a[100], cnt;

	scanf("%d %d", &n, &m);

	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}

	for(i = 0, cnt = n; cnt != 1; i++){
		
		if(a[i % n] != 0){
			if(a[i % n] > m){
				a[i % n] = a[i % n] - m;
			}else{
				a[i % n] = 0;
				cnt--;
			}
		}
	}

	for(; a[i % n] == 0; i++);

	printf("%d\n", i % n + 1);

	return 0;
}
