/*****************************************************************************************************
   * 파일명: assign_01.c

   * 내용: 점의 좌표 (x, y)를 입력받아 스크린 상의 선택 영역 내의 점인지 검사하는 프로그램을 작성하시오.
            스크린 상의 선택 영역은 직사각형 모양의 영역으로 직사각형의 좌상단점과 우하단점에 의해서 결정된다.

   * 작성자: 이상엽_202111022_영어교육과

   * 날짜: 2025.04.22.

   * 버전: v1.0

 *******************************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assign_01(void);
int selectedSpace();

//assign_01함수 호출
int main()

{
    assign_01();

    return 0;
}

// 좌상단점, 우하단점, 점의좌표(x, y) 입력받아 저장
// selectedSpace로 부터 선택영역 내의 점인지 아닌지를 가져와, 결과를 콘솔에 출력
int assign_01(void)
{
    int left, right, top, bottom, x, y;

    printf("선택 영역의 좌상단점 (left, top)? ");
    scanf("%d %d", &left, &top);   // 좌상단점

    printf("선택 영역의 우하단점 (right, bottom)? ");
    scanf("%d %d", &right, &bottom); //우하단점

    printf("점의 좌표(x, y)? ");
    scanf("%d %d", &x, &y); // 점의좌표 (x, y)


    if (selectedSpace(left, right, top, bottom, x, y))
    {
        printf("직사각형 모양의 선택 영역 내의 점입니다.");
    }
    else
    {
        printf("직사각형 모양의 선택 영역 내의 점이 아닙니다.");
    }
    return 0;
}


// 선택영역 내에 점이 있는지 계산하는 함수
int selectedSpace(int left, int right, int top, int bottom, int x, int y)
{
    if (x >= left && x <= right && y >= top && y <= bottom)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}