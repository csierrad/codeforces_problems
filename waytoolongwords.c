#include <stdio.h>
#include <string.h>

int main(){

	int n;
	char str[101];

	scanf("%d", &n);

	while(n--){
		scanf("%s", str);
		if(strlen(str) > 10){
			printf("%c%d%c\n", str[0], (int)strlen(str) - 2, str[strlen(str) - 1]);
		}else{
			puts(str);
		}
	}
	return 0;
}