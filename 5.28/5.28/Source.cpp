#include <stdio.h>
#include <ctype.h>
char changeCase(char c) 
{
    if (islower(c)) //islower���\�ά��ˬd�r���O�_���p�g
    {
        return toupper(c); //�ഫ�j�p�g���禡
    }
    else if (isupper(c)) {
        return tolower(c);
    }
    else {
        return c;//����ϥΪ̿�J�D�r���r��
    }
}
int main() {
    char ch;
    printf("�п�J�r��: ");
    scanf_s("%c", &ch);
    printf("���ܤj�p�g�᪺�Φ�: %c\n", changeCase(ch));
    return 0;
}