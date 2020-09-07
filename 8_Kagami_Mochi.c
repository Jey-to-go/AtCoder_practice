#include<stdio.h>

int main(void)
{
	int n;
	int i, j;
	int max;
	int tmp;
	int count = 1;

	scanf("%d", &n);

	int mochi[n];

	for (i=0; i<n; i++){
		scanf("%d", &mochi[i]);
	}

	max = mochi[0];

	for (i=0; i<n; i++) {
		for(j=i; j<n; j++){
			if (mochi[i]<mochi[j]) {
				tmp = mochi[i];
				mochi[i] = mochi[j];
				mochi[j] = tmp;
			}
		}
	}

	tmp = mochi[0];

	for (i=1; i<n; i++) {
		if(tmp!=mochi[i]){
			count++;
			tmp=mochi[i];
		}
	}

	printf("%d\n", count);

	return 0;
}
