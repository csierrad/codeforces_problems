/*
Business trip
900
https://codeforces.com/problemset/problem/149/A
*/

#include <stdio.h>

void sort(int *arr, int n){

	int i, j, aux;

	for(i = 0; i < n; i++){
		for(j = i + 1; j < n; j++){
			if(arr[i] < arr[j]){
				aux = arr[i];
				arr[i] = arr[j];
				arr[j] = aux;
			}
		}
	}
	
	return;
}


int main(){

	int i, k, t, m[12];

	scanf("%d", &k);

	for(i = 0; i < 12; i++){
		scanf("%d", &m[i]);
	}
	
	sort(m, 12);

	for(t = 0, i = 0; t < k && i < 12; i++) t += m[i];

	printf("%d\n", (k <= t) ? i : -1); 

	return 0;
}
