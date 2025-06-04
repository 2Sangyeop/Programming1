/*
 * 파일명: assign_07.c
 * 문제: 커피사이즈 (S, T, G)와 주문 수량을 입력받아서 출력하는 프로그램을 작성하시오.
        + 커피 사이즈는 S, T, G 세 가지 문자 중 하나로 입력받는다.
 * 작성자: 이상엽
 * 학번: 202111022
 * 작성일: 2025.3.31
 * 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char size[10];
    int num;

    printf("커피 사이즈 (S,T,G)와 주문수량? ");
    scanf("%s %d", size, &num);

    printf("%s 사이즈 %d잔을 주문합니다.", size, num);

    return 0;
}