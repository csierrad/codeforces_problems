/*
Two-gram
900
https://codeforces.com/problemset/problem/977/B
*/

#include <stdio.h>

int main(){

	int i, j, n, t, max;
	char str[101], tg[3];

	scanf("%d\n%s", &n, str);

	for(i = 0, max = 0; i < n - 1; i++){
		
		for(j = i + 1, t = 1; j < n; j++){
			if(str[j] == str[i] && str[j + 1] == str[i + 1]) t++;
		}

		if(t > max){
			tg[0] = str[i];
			tg[1] = str[i + 1];
			tg[2] = 0;

			max = t;
		}

	}

	printf("%s\n", tg);
	

	return 0;
}
