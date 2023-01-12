/*
String LCM
1000
https://codeforces.com/problemset/problem/1473/B
*/

#include <stdio.h>
#include <string.h>

void solve(){

	int i, max_len, cnt;
	char s[21], t[21], aux[21];

	scanf("%s %s", s, t);

	max_len = strlen(s) * strlen(t);

	if(strlen(s) > strlen(t)){
		strcpy(aux, s);
		strcpy(s, t);
		strcpy(t, aux);
	} 

	if(max_len == 1){
		if(s[0] == t[0]){
			printf("%s\n", s);
		}else{
			printf("-1\n");
		}
		return;
	}

	if(strlen(s) == 1 || strlen(t) == 1){
		for(i = 0; i < strlen(t); i++){
			if(s[0] != t[i]){
				printf("-1\n");
				return;
			}
		}
		printf("%s\n", t);
		return;
	}

	for(i = 0, cnt = 0; (i < max_len && (i % strlen(s) != 0 || i % strlen(t) != 0)) || i == 0; i++){
		if(s[i % strlen(s)] != t[i % strlen(t)]){
			printf("-1\n");
			return;
		}
		if(i % strlen(s) == strlen(s) - 1) cnt++;
	}
	
	for(i = 0; i < cnt; i++) printf("%s", s);
	printf("\n");

	return;
}

int main(){

	int t;

	scanf("%d", &t);

	while(t--){
		solve();
	}

	return 0;
}