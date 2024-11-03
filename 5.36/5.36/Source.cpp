#include <stdio.h>
void hanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1) {
        printf("將圓盤 1 從 %c 移到 %c\n", from_rod, to_rod);
        return;
    }
    hanoi(n - 1, from_rod, aux_rod, to_rod); // 將除了最大的圓盤移到輔助柱
    printf("將圓盤 %d 從 %c 移到 %c\n", n, from_rod, to_rod); // 移動最大的圓盤到終點柱
    hanoi(n - 1, aux_rod, to_rod, from_rod); // 將除了最大的個從輔助柱移到終點柱
}
int main() {
    int n;
    printf("請輸入圓盤數量：");
    scanf_s("%d", &n);
    hanoi(n, 'A', 'C', 'B'); // A 是起點柱, C 是終點柱, B 是輔助柱
    return 0;
}