#include <stdio.h>
void hanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1) {
        printf("�N��L 1 �q %c ���� %c\n", from_rod, to_rod);
        return;
    }
    hanoi(n - 1, from_rod, aux_rod, to_rod); // �N���F�̤j����L���컲�U�W
    printf("�N��L %d �q %c ���� %c\n", n, from_rod, to_rod); // ���ʳ̤j����L����I�W
    hanoi(n - 1, aux_rod, to_rod, from_rod); // �N���F�̤j���ӱq���U�W������I�W
}
int main() {
    int n;
    printf("�п�J��L�ƶq�G");
    scanf_s("%d", &n);
    hanoi(n, 'A', 'C', 'B'); // A �O�_�I�W, C �O���I�W, B �O���U�W
    return 0;
}