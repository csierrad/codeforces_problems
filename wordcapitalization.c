#include <stdio.h>
#include <ctype.h>

int main(){

	char str[1001];

	scanf("%s", str);

	printf("%c%s\n", toupper(str[0]), str + 1);

	return 0;
}