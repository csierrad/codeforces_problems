#include <stdio.h>

int main(){

	int i = 0, j, cont = 0;
	char str[101];

	scanf("%s", str);

	for(i = 0; str[i]; i++){
		if(str[i] != 1){
			cont ++;
			for(j = i + 1; str[j]; j++){
				if(str[j] == str[i]){
					str[j] = 1;
				}
			}
		}
	}

	cont % 2 == 0 ? printf("CHAT WITH HER!\n") : printf("IGNORE HIM!\n");

	return 0;
}