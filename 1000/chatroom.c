/*
Chat Room
1000
https://codeforces.com/problemset/problem/58/A
*/

#include <stdio.h>

int main(){

	int i, j;
	char str[101], hello[] = "hello";

	scanf("%s", str);

	for(i = 0, j = 0; str[i]; i++){
		if(str[i] == hello[j])j++;
	}

	printf((j == 5) ? "YES\n" : "NO\n");

	return 0;
}
