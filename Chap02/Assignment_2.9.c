/*
 * 파일명: assign_09.c
 * 문제: 16진수 정수를 입력받아 10진수로 출력하는 프로그램을 작성하시오.
 * 작성자: 이상엽
 * 학번: 202111022
 * 작성일: 2025.3.31
 * 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num;  // 16진수 값을 저장할 변수

    printf("16진수 정수? ");
    scanf("%x", &num);  // 16진수 입력 받기

    printf("16진수 %x는 10진수로 %d입니다.", num, num);

    return 0;
}