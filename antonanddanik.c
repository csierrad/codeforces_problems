#include <stdio.h>

int main(){

	int n = 0, cont = 0;
	char c;

	scanf("%d\n", &n);

	while(c != '\n'){
		scanf("%c", &c);
		if(c == 'A') cont++;
	}

	if(cont > n - cont){
		printf("Anton\n");
		return 0;
	}

	if(n - cont > cont){
		printf("Danik\n");
	}else printf("Friendship\n");	

	return 0;
}