#include <stdio.h>

int main() {
    int floor;
    printf("몇 층으로 쌓을까요? >> ");
    scanf("%d", &floor);
    for (int i = 1; i<=floor; i++) {
        for (int j = floor; j>i; j--) {
            printf(" ");
        }
        for (int k = 1; k<=i*2-1; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

