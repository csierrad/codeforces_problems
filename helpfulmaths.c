/*
Helpful Maths
800
https://codeforces.com/problemset/problem/339/A
*/

#include <stdio.h>
#include <string.h>

int main()
{

	int i = 0, j = 0;
	char str[101], aux;

	scanf("%s\n", str);

	for (j = 0; j + 2 < strlen(str); j += 2)
	{
		for (i = 0; i + 2 < strlen(str); i += 2)
		{
			if (str[i] > str[i + 2])
			{
				aux = str[i];
				str[i] = str[i + 2];
				str[i + 2] = aux;
			}
		}
	}

	printf("%s\n", str);

	return 0;
}