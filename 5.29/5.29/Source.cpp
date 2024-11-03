#include <stdio.h>
int gcd(int x, int y) {
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}
int lcm(int a, int b)//輾轉相除法
{
    return (a * b) / gcd(a, b);
}
int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf_s("%d %d", &num1, &num2);
    printf("LCM of %d and %d is %d\n", num1, num2, lcm(num1, num2));
    return 0;
}