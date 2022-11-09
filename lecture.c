/*
Lecture
1000
https://codeforces.com/problemset/problem/499/B
*/

#include <stdio.h>
#include <string.h>

int main(){

 	int i, j, n, m;
	char str[11];

	scanf("%d %d", &n, &m);

	char words[m][2][11];

	for(i = 0; i < m; i++){
		scanf("%s", str);
		strcpy(words[i][0], str);

		scanf("%s", str);

		if(strlen(str) < strlen(words[i][0]))
			strcpy(words[i][1], str);
		else
			strcpy(words[i][1], words[i][0]);
	}

	for(i = 0; i < n; i++){
		scanf("%s", str);
		for(j = 0; j < m; j++){
			if(strcmp(str, words[j][0]) == 0){
				printf("%s ", words[j][1]);
				break;
			}
		}
	}

	printf("\n"); 

	return 0;
}