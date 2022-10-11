/*
Beautiful Year
800
https://codeforces.com/problemset/problem/271/A
*/

#include <stdio.h>

int diff_dig(int n){

	int bit_number = 0, i, cont;

	while(n / 10 != 0 || n % 10 != 0){
		bit_number = bit_number | 1 << n % 10;
		n = n / 10;
	}

	for(i = 0, cont = 0; i < 10; i++){
		if(bit_number & 1 << i) cont++;
	}

	if(cont == 4) return 1;

	return 0;
}

int main(){

	int n;

	scanf("%d", &n);

	n++;

	while(!diff_dig(n)){
		n++;
	}

	printf("%d\n", n);

	return 0;
}