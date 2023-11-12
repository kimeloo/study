#include <stdio.h>

struct GameInfo {
    char* name;
    int year;
    int price;
    char* company;
};

int main(void)
{
    struct GameInfo gameArray[2] = {
        { "나도게임", 2017, 50, "나도회사" } ,
        { "너도게임", 2017, 100, "너도회사" }
    };

    return 0;
}
