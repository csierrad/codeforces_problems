/*
Xenia and Ringroad
1000
https://codeforces.com/problemset/problem/339/B
*/
/* 
#include <stdio.h>

int main()
{

	int i, j, n, m, a[100000], t;
	long long int sol = 0;

	scanf("%d %d", long &n, &m);

	scanf("%d", &a[0]);

	for (i = 1, t = 0; i < m; i++)
	{
		scanf("%d", &a[i]);

		if (a[i] < a[i - 1])
		{
			t++;
		}
	}

	sol = n * t + a[i - 1] - 1;

	printf("%lld\n", sol);

	return 0;
} */

#include <stdio.h>

int main()
{
	int n, m, p = 1, x;
	long long r = 0;

	scanf("%d %d", &n, &m);

	while (m--)
	{
		scanf("%d", &x);
		r += (x - p + n) % n;
		p = x;
	}

	printf("%lld", r);

	return 0;
}