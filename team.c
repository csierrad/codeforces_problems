/*
Team
800
https://codeforces.com/problemset/problem/231/A
*/

#include <stdio.h>

int main()
{
	int n, res = 0;
	int aux[3], cont = 0;

	scanf("%d", &n);

	while(n--){
		scanf("%d %d %d", aux, aux + 1, aux + 2);

		res = 0;
		res = res | (aux[0] << 2);
		res = res | (aux[1] << 1);
		res = res | aux[2];

		if((res & 6) == 6 || (res & 5) == 5 || (res & 3) == 3)
		{
			cont++;
		}
	}

	printf("%d\n", cont);
	return 0;
}