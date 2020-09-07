#include<stdio.h>

int main(void){
	int n;
	int str[200];
	int i=0;
	int j = 0;
	int k = 0;
	int operate_times = 0;
	int count = 0;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &str[i]);
	}


	while(j<n) {
		if (str[j]%2 == 0) {
			count++;
		}
		j++;
		if(count==n){
			for(k=0; k<n; k++){
				str[k] /= 2;
			}
			operate_times++;
			count = 0;
			j = 0;
		}
	}

	printf("%d\n", operate_times);

	return 0;
}
