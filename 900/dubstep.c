/*
Dubstep
900
https://codeforces.com/problemset/problem/208/A
 */

#include <stdio.h>

int wub(char *str, int i)
{

	if (str[i + 1] == 'U' && str[i + 2] == 'B'){
		str[i] = '.';
		str[i + 1] = '.';
		str[i + 2] = '.';
		i += 2;
	}

	return (i);
}

int main()
{

	int i = 0, flag = 0;
	char str[201];

	scanf("%s", str);

	while(str[i]){
		if(str[i] == 'W'){
			i = wub(str, i);
		}
		i++;
	}

	i = 0;

	while(str[i] == '.') i++;

	while(str[i]){
		while(str[i] != '.' && str[i]){
			printf("%c", str[i]);
			i++;
		}
		printf(" ");
		if(str[i])i += 3;
	}
	printf("\n");

	return 0;
}