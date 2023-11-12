#include <stdio.h>

int main(void)
{
    char c_array[10] = { 'c','o','d','i','n','g' };
    for (int i = 0; i < sizeof(c_array); i++)
    {
        printf("%c\n", c_array[i]); // %c를 %d로 수정
    }
    return 0;
}
