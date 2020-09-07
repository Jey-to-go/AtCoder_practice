#include<stdio.h>

int main(void){
	int a, b, c;
	char s[101];

	scanf("%d", &a);
	//スペース区切りの文字を入力
	scanf("%d %d", &b, &c);
	scanf("%s", s);

	printf("%d %s\n", a+b+c, s);
	return 0;
}
