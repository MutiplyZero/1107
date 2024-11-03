#include <stdio.h>
#include <ctype.h>
char changeCase(char c) 
{
    if (islower(c)) //islower的功用為檢查字母是否為小寫
    {
        return toupper(c); //轉換大小寫的函式
    }
    else if (isupper(c)) {
        return tolower(c);
    }
    else {
        return c;//防止使用者輸入非字母字元
    }
}
int main() {
    char ch;
    printf("請輸入字母: ");
    scanf_s("%c", &ch);
    printf("轉變大小寫後的形式: %c\n", changeCase(ch));
    return 0;
}