#include <stdio.h>
unsigned long long int f(unsigned int n)//避免回傳數太大，所以這裡用unsigned long long int
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
	printf("請輸入n值:");
	scanf_s("%u", &n);
	printf("費式數列的第 %u 項為: %10u\n", n, f(n));
	return 0;
}
//心得:費式數列遞增到後面數字太大，故以較大的資料型態做儲存

