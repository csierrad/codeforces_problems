/* 
The New Year: Meeting Friends
800
https://codeforces.com/problemset/problem/723/A
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

	int i, n[3], dis[3];

	scanf("%d %d %d", n, n + 1, n + 2);

	dis[0] = abs(n[0] - n[1]) + abs(n[0] - n[2]);
	dis[1] = abs(n[0] - n[2]) + abs(n[1] - n[2]);
	dis[2] = abs(n[1] - n[2]) + abs(n[0] - n[1]);

	if(dis[0] < dis[1] && dis[0] < dis[2]){
		printf("%d\n", dis[0]);
	}else if(dis[1] < dis[2]){
		printf("%d\n", dis[1]);
	}else printf("%d\n", dis[2]);

	return 0;
}