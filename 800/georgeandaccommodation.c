/*
George and Accommodation
800
https://codeforces.com/problemset/problem/467/A
*/

#include <stdio.h>

int main(){

	int n, p, q, cont = 0;

	scanf("%d", &n);

	while(n--){
		scanf("%d %d", &p, &q);
		if(q - p >= 2) cont++; 
	}

	printf("%d\n", cont);

	return 0;
}