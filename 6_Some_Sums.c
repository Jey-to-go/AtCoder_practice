#include<stdio.h>

int main(void){
	int n, temp_n;
	int a, b;
	int digits = 10;
	int i;
	int each_digits_sum = 0;
	int temp_digits = 0;
	int sum = 0;
	int num = 0;
	int temp;

	scanf("%d %d %d", &n, &a, &b);

	while(1){
		if (n - digits < 0){
			digits /= 10;
			break;
		}
		digits *= 10;
	}

	while(n >= 1){
		temp_digits = digits;
		temp_n = n;
		while(1) {
			each_digits_sum += temp_n / temp_digits;
			temp = temp_n / temp_digits;
			temp_n = temp_n - temp_digits*temp;

			if (temp_n == 0) break;

			temp_digits /= 10;
		}

		if (each_digits_sum >= a && each_digits_sum <= b) {
			sum += n;
		}
		each_digits_sum = 0;
		n--;
		if(n - digits < 0){
			digits /= 10;
		}
	}

	printf("%d\n", sum);

	return 0;
}


	// } else if(n>=100 && n<=999)
	// {
	// 	digits = 100;
	// 	for(i=0; i<n; i++) {
	// 		c = n / digits;
	// 		d = (n - c * digits) / (digits /10);
	// 		e = n - c * digits + d * digits/10
	// 		each_digits_sum = c + d;
	// 		if (each_digits_sum >= a && each_digits_sum <= b) count++;
	// 	}
	// } else if(n>=1000 && n<=9999)
	// {
	// 	digits = 1000;
	// } else if(n==10000)
	// {
	// 	digits = 10000;
	// }
	//
	// for(i=0; i<n; i++) {
	// 	c = n / digits;
	// 	d = n - c * digits;
	// 	each_digits_sum = c + d;
	// 	if (each_digits_sum >= a && each_digits_sum <= b) count++;
	// }
	//
	//
