/*
Caps Lock
1000
https://codeforces.com/problemset/problem/131/A
*/

#include <stdio.h>
#include <ctype.h>

int main()
{

	int i;
	char str[101], strcp[101];

	scanf("%s", str);

	*strcp = *str;

	if (str[0] >= 'a' && str[0] <= 'z')
		strcp[0] = toupper(str[0]);
	else
		strcp[0] = tolower(str[0]);

	for (i = 1; str[i]; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			strcp[i] = tolower(str[i]);
		else
		{
			printf("%s\n", str);
			return 0;
		}
	}

	strcp[i] = 0;

	printf("%s\n", strcp);

	return 0;
}