#include<stdio.h>

int main(void){
	int number_of_500;
	int number_of_100;
	int number_of_50;
	int sum;
	int payment_ways = 0;
	int i, j, k;
	int tempolary_sum1, tempolary_sum2, tempolary_sum3;

	scanf("%d", &number_of_500);
	scanf("%d", &number_of_100);
	scanf("%d", &number_of_50);
	scanf("%d", &sum);

	for (i=number_of_500; i>=0; i--)
	{
		tempolary_sum1 = sum - 500*i;
		if (tempolary_sum1 == 0){
			payment_ways++;
			printf("1 ‚Å’Ç‰Á\n");
		} else if (sum > 0){
			for (j=number_of_100; j>=0; j--)
			{
				tempolary_sum2 = tempolary_sum1 - 100*j;
				if (tempolary_sum2 == 0){
					payment_ways++;
					printf("‚Q ‚Å’Ç‰Á\n");
				}else if(tempolary_sum2 > 0){
					for (k=number_of_50; k>=0; k--)
					{
						tempolary_sum3 = tempolary_sum2 - 50*k;
						if (tempolary_sum3 == 0) {
							payment_ways++;
							printf("‚R ‚Å’Ç‰Á\n");
							break;
						}
					}
				}
			}
		}
	}

	printf("%d\n", payment_ways);




	return 0;
}
