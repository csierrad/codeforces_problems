/*
String Task
1000
https://codeforces.com/problemset/problem/118/A
*/

#include <stdio.h>
#include <ctype.h>

int consonant(char c){

	int i;
	char str[12] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u', 'Y', 'y'};

	for(i = 0; i < 12; i++){
		if(c == str[i]) return (0);
	}

	return (1);
}

int main(){

	int i, j;
	char str[101], sol[201];

	scanf("%s", str);


	for(i = 0, j = 0; str[i]; i++){
		if(consonant(str[i])){
			sol[j] = '.';
			sol[j + 1] = tolower(str[i]);
			j += 2;
		}
	}

	sol[j] = 0;

	printf("%s\n", sol);

	return 0;
}