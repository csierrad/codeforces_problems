/* 
Sale
900
https://codeforces.com/problemset/problem/34/B
 */

#include <stdio.h>
#include <stdlib.h>

void sort(int *arr, int n){

	int i, j, aux;

	for(i = 0; i < n - 1; i++){
		for(j = i + 1; j < n; j++){
			if(arr[i] > arr[j]){
				aux = arr[i];
				arr[i] = arr[j];
				arr[j] = aux;
			}
		}
	}

	return;
}

int main(){

	int i, n, m, t, arr[100];

	scanf("%d %d", &n, &m);

	for(i = 0; i < n; i++) scanf("%d", arr + i);

	sort(arr, n);

	for(i = 0, t = 0; arr[i] < 0 && i < m; i++) t += arr[i];

	printf("%d\n", abs(t));

	return 0;
}