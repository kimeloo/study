#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    srand((unsigned)time(NULL));
    printf("\n\n === 아빠는 대머리 게임 === \n\n");
    int answer; // 사용자 입력값
    int treatment = rand() % 4; // 발모제 선택 (0~3)

    int cntShowBottle = 0; // 이번 회차에 보여줄 병 개수
    int prevCntShowBottle = 0; // 앞 회차에서 보여준 병 개수
    
    // 3번의 기회 (3번의 발모제 투여 시도)
    for (int i = 1; i <= 3; i++)
    {
        int bottle[4] = { 0, 0, 0, 0 }; // 4개의 병
        do {
            cntShowBottle = rand() % 2 + 2; // 보여줄 약병 개수(0~1 + 2 -> 2~3)
        } while (cntShowBottle == prevCntShowBottle);
        prevCntShowBottle = cntShowBottle;

        int isIncluded = 0; // 보여줄 약병 중에 발모제가 포함되었는지 여부(1 : 포함)
        printf(" > %d 번째 시도 : ", i);

        // 보여줄 약병 선택
        for (int j = 0; j < cntShowBottle; j++)
        {
            int randBottle = rand() % 4; // 0~3

            // 아직 선택되지 않은 약병이면 선택
            if (bottle[randBottle] == 0)
            {
                bottle[randBottle] = 1;
                if (randBottle == treatment)
                {
                    isIncluded = 1;
                }
            }
            // 이미 선택된 약병이면 중복이므로 다시 선택
            else
            {
                j--; // 반복 횟수 조정
            }
        }

        // 사용자에게 문제 표시
        for (int k = 0; k < 4; k++)
        {
            if (bottle[k] == 1)
                printf("%d ", k + 1); // %d 뒤에 빈 칸을 하나 넣어주세요
        }
        printf(" 물약을 머리에 바릅니다\n\n");

        if (isIncluded == 1)
        {
            printf("  >> 성공 ! 머리가 났어요 !!\n");
        }
        else
        {
            printf("  >> 실패 ! 머리가 나지 않았어요.. ㅠㅠ\n");
        }

        printf("\n ... 계속 하려면 아무키나 누르세요 ...");
        (void) getchar();
    }

    printf("\n\n발모제는 몇 번일까요? ");
    scanf("%d", &answer);

    if (answer == treatment + 1)
    {
        printf("\n >> 정답입니다!\n");
    }
    else
    {
        printf("\n >> 땡 ! 틀렸어요, 정답은 %d 입니다\n", treatment + 1);
    }

    return 0;
}
