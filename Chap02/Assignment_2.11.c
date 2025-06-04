/*
 * 파일명: assign_11.c
 * 문제: 원주율 파이 값이 3.14159265라고 할 때, 파이 값을 여러 가지 방법으로 출력하는 프로그램을 작성하시오.
        + 소수점 이하 2자리까지, 4자리까지, 6자리까지, 8자리까지 각각 출력하고, 지수표기로도 출력한다.
 * 작성자: 이상엽
 * 학번: 202111022
 * 작성일: 2025.3.31
 * 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double pi;
    pi = 3.14159265;

    printf("pi = %.2lf \n", pi);
    printf("pi = %.4lf \n", pi);
    printf("pi = %.6lf \n", pi);
    printf("pi = %.8lf \n", pi);
    printf("pi = %e \n", pi);

    return 0;
}