#include<stdio.h>

int main(void){
	char x[3];
	int i;
	int count = 0;

	scanf("%s",&x);
	for (i=0;i<3;i++)
	{
		if(x[i]=='1') count++;
	}
	printf("%d", count);

	return 0;
}
