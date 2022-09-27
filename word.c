#include <stdio.h>
#include <ctype.h>

int main(){

	int i = 0, lower = 0, upper = 0;
	char str[101];

	scanf("%s", str);

	while(str[i]){
		(str[i] >= 'a' && str[i] <= 'z') ? lower++ : upper++;
		i++;
	}

	if(lower >= upper){
		for(i = 0; str[i]; i++){
			str[i] = tolower(str[i]);
		}
	} else{
		for(i = 0; str[i]; i++){
			str[i] = toupper(str[i]);
		}
	}

	printf("%s\n", str);

	return 0;
}