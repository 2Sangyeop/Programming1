/*****************************************************************************************************
   * 파일명: assign_03.c

   * 내용:

   * 작성자: 이상엽_202111022_영어교육과

   * 날짜: 2025.04.22.

   * 버전: v1.0

 *******************************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assign_03(void);
int MoneyChange();

//assign_03함수 호출
int main()

{
    assign_03();

    return 0;
}

// 거스름돈 입력 함수 / 이때, MoneyChange함수 사용
int assign_03(void)
{
    int money;
    int count;
    printf("거스름돈을 입력하세요: ");
    scanf("%d", &money);

    MoneyChange(money);
}


// 거스름돈 계산 함수 (절삭 기능 추가)
int MoneyChange(int don)
{
    int change = 0;
    int count;
    change = don - (don % 10);

    printf("거스름돈 (10원미만 절사): %d\n", change);

    if (don >= 50000)
    {
        count = don / 50000;
        printf("50000원: %d장\n", count);
        don %= 50000;
    }

    if (don >= 10000)
    {
        count = don / 10000;
        printf("10000원: %d장\n", count);
        don %= 10000;
    }

    if (don >= 5000)
    {
        count = don / 5000;
        printf("5000원: %d장\n", count);
        don %= 5000;
    }

    if (don >= 1000)
    {
        count = don / 1000;
        printf("1000원: %d장\n", count);
        don %= 1000;
    }

    if (don >= 100)
    {
        count = don / 100;
        printf("100원: %d개\n", count);
        don %= 100;
    }

    if (don >= 10)
    {
        count = don / 10;
        printf("10원: %d개\n", count);
        don %= 10;
    }

    return 0;
}