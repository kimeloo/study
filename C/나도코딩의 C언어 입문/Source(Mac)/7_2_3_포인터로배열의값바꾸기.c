#include <stdio.h>

void changeArray(int* ptr);

int main(void)
{
    int arr2[3] = { 10, 20, 30 };
    //changeArray(arr2);
    changeArray(&arr2[0]);

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", arr2[i]);
    }

    return 0;
}

void changeArray(int* ptr)
{
    ptr[2] = 50;
}
