#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/time.h>

int level;
int arrayFish[6];
int* cursor;

void initData(void);
void printfFishes(void);
void decreaseWater(long elapsedTime);
int checkFishAlive(void);

int main(void)
{
    struct timeval start; // 게임 시작 시간
    struct timeval curr; // 현재 시간
    
    long totalElapsedTime = 0; // 총 경과 시간
    long prevElapsedTime = 0; // 물을 준 시간 간격 측정
    int num; // 물을 줄 어항 번호
    initData(); // 게임 초기화 함수 호출

    cursor = arrayFish; // cursor[0], cursor[1], ...

    gettimeofday(&start, NULL); // 현재 시간을 시작 시간으로 저장
    while (1)
    {
        printfFishes();
        printf("몇 번 어항에 물을 주시겠어요? ");
        scanf("%d", &num);

        // 입력값 체크
        if (num < 1 || num > 6)
        {
            printf("\n입력값이 잘못되었습니다\n");
            continue;
        }
        
        // 총 경과 시간
        gettimeofday(&curr, NULL);
        totalElapsedTime = curr.tv_sec + (curr.tv_usec / CLOCKS_PER_SEC)
            - start.tv_sec - (start.tv_usec / CLOCKS_PER_SEC); // 총 경과 시간을 초단위로 표시
        printf("총 경과 시간 : %ld 초\n", totalElapsedTime);

        // 직전 물 준 시간 (마지막으로 물 준 시간) 이후로 흐른 시간
        prevElapsedTime = totalElapsedTime - prevElapsedTime;
        printf("최근 경과 시간 : %ld 초\n", prevElapsedTime);
        decreaseWater(prevElapsedTime); // 어항의 물을 감소(증발)시키는 함수 호출

        // 사용자가 입력한 어항에 물 주기
        // 1. 어항의 물 높이가 0 이하면 물을 주지 않음
        if (cursor[num - 1] <= 0)
        {
            printf("%d 번 물고기는 이미 죽었습니다.. 물을 주지 않습니다\n", num);
        }
        // 2. 어항의 물 높이가 0 초과면 100을 넘지 않는지 확인하고 물을 줌
        else if (cursor[num - 1] + 1 <= 100)
        {
            // 물을 준다
            printf("%d 번 어항에 물을 줍니다\n\n", num);
            cursor[num - 1] += 1; // cursor[num - 1] = cursor[num - 1] + 1
        }

        // 레벨업 확인(레벨업은 20초마다 한 번씩 수행)
        if (totalElapsedTime / 20 > level - 1)
        {
            // 레벨업
            level++; // level : 1 -> level : 2 -> level : 3...
            printf("*** 축하합니다. %d레벨에서 %d레벨로 올랐습니다. ***\n\n", level - 1, level);
            if (level == 5) // 최고 레벨
            {
                printf("\n\n축하합니다. 최고 레벨을 달성했습니다. 게임을 종료합니다\n\n");
                exit(0);
            }
        }

        // 모든 물고기가 죽었는지 확인
        if (checkFishAlive() == 0)
        {
            // 물고기가 모두 죽음
            printf("모든 물고기가 죽었습니다. ㅠㅠ \n");
            exit(0);
        }
        else
        {
            // 물고기가 최소 한 마리 이상 살아 있음
            printf("물고기가 아직 살아 있어요!\n");
        }
        prevElapsedTime = totalElapsedTime;
    }
    return 0;
}

void initData(void)
{
    level = 1; // 게임 레벨 (1~5)
    for (int i = 0; i < 6; i++)
    {
        arrayFish[i] = 100; // 어항의 물 높이 (0~100)
    }
}

void printfFishes(void)
{
    printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
    for (int i = 0; i < 6; i++)
    {
        printf("  %3d ", arrayFish[i]);
    }
    printf("\n\n");
}

void decreaseWater(long elapsedTime)
{
    for (int i = 0; i < 6; i++)
    {
        arrayFish[i] -= (level * 3 * (int)elapsedTime);
        if (arrayFish[i] < 0)
        {
            arrayFish[i] = 0;
        }
    }
}

int checkFishAlive(void)
{
    for (int i = 0; i < 6; i++)
    {
        if (arrayFish[i] > 0)
            return 1; // 참 True
    }
    return 0;
}
