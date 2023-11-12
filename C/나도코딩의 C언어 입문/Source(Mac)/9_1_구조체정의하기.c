#include <stdio.h>

struct GameInfo {
    char* name;
    int year;
    int price;
    char* company;
};

int main(void)
{
    char* name = "나도게임";
    int year = 2017;
    int price = 50;
    char* company = "나도회사";

    char* name2 = "너도게임";
    int year2 = 2017;
    int price2 = 100;
    char* company2 = "너도회사";

    return 0;
}
