#include <stdio.h>
unsigned long long int f(unsigned int n)//�קK�^�ǼƤӤj�A�ҥH�o�̥�unsigned long long int
{
	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return 1;
	}
	unsigned long long int first = 0, second = 1, fib;
	for (unsigned int i = 2; i <= n; i++) {
		fib = first + second;
		first = second;
		second = fib;
	}
	return fib;
}
int main() {
	unsigned int n;
	printf("�п�Jn��:");
	scanf_s("%u", &n);
	printf("�O���ƦC���� %u ����: %10u\n", n, f(n));
	return 0;
}
//�߱o:�O���ƦC���W��᭱�Ʀr�Ӥj�A�G�H���j����ƫ��A���x�s

