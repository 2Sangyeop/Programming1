/*
 * 파일명: assign_02.c
 * 문제: 학생의 번호와 학점을 입력받아 출력하는 프로그램을 작성하시오.
        + 학생의 번호는 정수로, 학점은 실수로 입력받는다.
 * 작성자: 이상엽
 * 학번: 202111022
 * 작성일: 2025.3.31
 * 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num;        // 학생 번호 저장할 변수
    double grade;   // 학생 학점 저장할 변수

    printf("번호? ");
    scanf("%d", &num);  // & 추가해서 주소 전달하기*

    printf("학점? ");
    scanf("%lf", &grade);


    printf("%d번 학생의 학점은 %.6lf입니다.\n", num, grade);

    return 0;
}