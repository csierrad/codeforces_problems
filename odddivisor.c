/*
Odd Divisor
900
https://codeforces.com/problemset/problem/1475/A
 */

#include <stdio.h>

int main()
{

	int t;
	long long int n;

	scanf("%d", &t);

	while (t--)
	{
		scanf("%lld", &n);

		if (n % 2)
		{
			printf("YES\n");
		}
		else
		{
			while (n != 1)
			{
				if (n % 2)
				{
					printf("YES\n");
					break;
				}
				n = n / 2;
			}
			if(n == 1) printf("NO\n");
		}
	}

	return 0;
}