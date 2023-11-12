#include <stdio.h>

struct GameInfo {
    char* name;
    int year;
    int price;
    char* company;
};

int main(void)
{
    struct GameInfo gameInfo1;
    gameInfo1.name = "나도게임";
    gameInfo1.year = 2017;
    gameInfo1.price = 50;
    gameInfo1.company = "나도회사";

    printf("-- 게임 출시 정보 --\n");
    printf("  게임명   : %s\n", gameInfo1.name);
    printf("  발매년도 : %d\n", gameInfo1.year);
    printf("  가격     : %d\n", gameInfo1.price);
    printf("  제작사   : %s\n", gameInfo1.company);

    struct GameInfo gameInfo2 = { "너도게임", 2017, 100, "너도회사" };

    printf("-- 또 다른 게임 출시 정보 --\n");
    printf("  게임명   : %s\n", gameInfo2.name);
    printf("  발매년도 : %d\n", gameInfo2.year);
    printf("  가격     : %d\n", gameInfo2.price);
    printf("  제작사   : %s\n", gameInfo2.company);

    return 0;
}
