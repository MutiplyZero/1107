#include<stdio.h>
int power(int base, int exponent) {
	if (exponent == 1) {
		return base;
	}
	return base * power(base, exponent - 1);
}
int main(){
	int base, exponent;
	printf("請輸入底數:");
	scanf_s("%d",&base);
	printf("請輸入指數:");
	scanf_s("%d", &exponent);
	printf("%d^%d = %d\n", base, exponent, power(base, exponent));
	return 0;
}