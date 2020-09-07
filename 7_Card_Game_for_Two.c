#include<stdio.h>

int main(void){
	int n;
	int i, j;
	int Alice_sum = 0;
	int Bob_sum = 0;
	int turn = 0;
	int max = 0;
	int cancel_flag = 0;

	scanf("%d", &n);

	int array[n];

	for(i=0; i<n; i++){
		scanf("%d", &array[i]);
	}




	while(1){

		max = array[0];

		for(i=1; i<n; i++){
			if (max <= array[i]) {
				max = array[i];
			}
		}

		if (turn == 0){
			Alice_sum += max;
			turn = 1;
		} else if (turn == 1){
			Bob_sum += max;
			turn = 0;
		}

		for(i=0; i<n; i++){
			if (max == array[i]) {
				for(j=i; j<n; j++) {
					array[j] = array[j+1];
					cancel_flag = 1;
				}
				array[n-1] = '\0';
				if (cancel_flag == 1) break;
			}
		}

		n--;
		if (n==0) break;
	}

	printf("%d\n", Alice_sum - Bob_sum);

	return 0;
}
