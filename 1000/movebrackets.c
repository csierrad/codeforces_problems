/*
Move Brackets
1000
https://codeforces.com/problemset/problem/1374/C
*/

#include <stdio.h>

int check_brackets(char *s, int n){

	int i, j, c;

	for(i = 0, c = 0; i < n; i++){
		if(s[i] == '(' && s[i + 1] == ')'){
			s[i] = s[i + 1] = '.';
			i++;
			c += 2;
		}
	}

	for(i = 0; i < n; i++){
		if(s[i] == '.'){
			for(j = 1; s[i + j] == '.' && i + j < n; j++); 
			if(i + j < n){
				s[i] = s[i + j];
				s[i + j] = '.';
			}
		}
	}

	if(c)
		n = check_brackets(s, n - c);

	return n;
}

int main(){
	
	int i, j, t, n, c;
	char s[51];

	scanf("%d", &t);

	while(t--){
		scanf("%d %s", &n, s);

		n = check_brackets(s, n);

		printf("%d\n", (n) ? n / 2 : 0);
	}


	return 0;
}