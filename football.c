/* 
Football
900
https://codeforces.com/problemset/problem/96/A
 */

#include <stdio.h>
#include <string.h>

int main(){

	int i, sum;
	char str[100];

	scanf("%s", str);

	for(i = 0, sum = 1; i < strlen(str); i++){
		if(str[i] == str[i + 1]) sum++;
		else sum = 1;

		if(sum == 7){
			printf("YES\n");
			return 0;
		}
	}
	
	printf("NO\n");

	return 0;
}