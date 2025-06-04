/*
 * 파일명: assign_05.c
 * 문제: 몸무게를 입력받아서 출력하는 프로그램을 작성하시오.
       + 몸무게는 실수로 입력받으며, 소수점 이하 2자리 까지만 출력한다.
 * 작성자: 이상엽
 * 학번: 202111022
 * 작성일: 2025.3.31
 * 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    float weight;

    printf("몸무게? ");
    scanf("%f", &weight);

    printf("입력한 몸무게는 %.2f입니다.", weight);

    return 0;
}