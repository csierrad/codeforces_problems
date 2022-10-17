/*
Ilya and Bank Accountç
900
https://codeforces.com/problemset/problem/313/A
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{

	int i = 0, n;

	scanf("%d", &n);

	if (n < 0)
	{
		if (abs(n % 10) < abs((n / 10) % 10))
		{
			n = (n / 100) * 10 + n % 10;
		}
		else n = n / 10;
	}

	printf("%d\n", n);

	return 0;
}