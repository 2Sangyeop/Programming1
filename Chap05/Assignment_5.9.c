/*****************************************************************************************************
   * 파일명: assign_09.c

   * 내용:햄버거 가게의 계산서 프로그램을 작성하시오. 햄버거는 4000원, 콜라는 1500원, 감자튀김은 2000원이고,
            세 가지를 세트로 주문하면 6500원이라고 하자. 햄버거, 콜라, 감자튀김의 수량을 입력받아서 최대한
            세트로 구성하고 나머지는 단품으로 계산하도록 한다. 예를 들어 햄버거 2, 콜라 1, 감자튀김 3을 주문하면
            계산은 세트 1, 햄버거 1, 감자튀김 2로 해야 한다.

   * 작성자: 이상엽_202111022_영어교육과

   * 날짜: 2025.04.22.

   * 버전: v1.0

 *******************************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assign_09(void);
int makeSet();

//assign_05함수 호출
int main()

{
    assign_09();

    return 0;
}


int assign_09(void)
{
    printf("[햄버거 4000원, 감자튀김 2000원, 콜라 1500원, 세트 6500원]\n");

    int ham = 0; //햄버거 개수
    int pot = 0; //감자튀김 개수
    int cok = 0; //콜라 개수
    int set = 0; //세트 개수

    printf("햄버거 개수? ");
    scanf("%d", &ham);
    printf("감자튀김 개수? ");
    scanf("%d", &pot);
    printf("콜라 개수? ");
    scanf("%d", &cok);

    set = makeSet(ham, pot, cok);

    ham -= set;
    pot -= set;
    cok -= set;

    // 결과 출력
    printf("\n상품명        단가     수량     금액\n");
    if (set > 0)
        printf("세트          6500     %d        %d\n", set, 6500 * set);
    if (ham > 0)
        printf("햄버거        4000     %d        %d\n", ham, 4000 * ham);
    if (pot > 0)
        printf("감자튀김      2000     %d        %d\n", pot, 2000 * pot);
    if (cok > 0)
        printf("콜라          1500     %d        %d\n", cok, 1500 * cok);

    printf("-----------------------------------\n");
    printf("합계                             %d", 6500 * set + 4000 * ham + 2000 * pot + 1500 * cok);

    return 0;
}


// 세트를 최대한으로 구성해주는 함수
int makeSet(int ham, int pot, int cok)
{
    int set = 0;

    while (ham != 0 && pot != 0 && cok != 0)
    {
        ham--;
        pot--;
        cok--;
        set++;
    }
    return set;
}