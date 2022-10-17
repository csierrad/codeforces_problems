/* 
Puzzles
900
https://codeforces.com/problemset/problem/337/A
 */

#include <stdio.h>

void sort(int *arr, int size){

	int i, j, aux;

	for(i = 0; i < size; i++){
		for(j = i + 1; j < size; j++){
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

	int i, n, m, min, p[50];

	scanf("%d %d\n", &n, &m);

	for(i = 0; i < m; i++){
		scanf("%d ", &p[i]);
	}

	sort(p, m);

	min = p[n - 1] - p[0];

	for(i = 1; i + n - 1 < m; i++){
		if(p[i + n - 1] - p[i] < min){
			min = p[i + n - 1] - p[i];
		}		
	}

	printf("%d\n", min);

	return 0;
}