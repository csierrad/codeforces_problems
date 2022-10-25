/*
Dragons
1000
https://codeforces.com/problemset/problem/230/A
*/

#include <stdio.h>

void sort(int arr[][2], int size){

	int i, j, aux[2];

	for(i = 0; i < size; i++){
		for(j = i + 1; j < size; j++){
			if(arr[i][0] > arr[j][0]){
				aux[0] = arr[i][0];
				aux[1] = arr[i][1];
				arr[i][0] = arr[j][0];
				arr[i][1] = arr[j][1];
				arr[j][0] = aux[0];
				arr[j][1] = aux[1];
			}
		}
	}

	return;
}


int main(){

	int i, n, s, dragons[1000][2];

	scanf("%d %d", &s, &n);

	for(i = 0; i < n; i++){
		scanf("%d %d", &dragons[i][0], &dragons[i][1]);
	}

	sort(dragons, n);

	for(i = 0; i < n; i++){
		if(s > dragons[i][0]){
			s += dragons[i][1];
		} else{
			printf("NO\n");
			return 0;
		}
	}

	printf("YES\n");

	return 0;
}
