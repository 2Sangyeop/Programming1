/*
   * 파일명: assign_17.c

   * 내용: 7번째 비트만 1인값, 15번째 비트만 1인 값, 23번째 비트만 1인값,
   31번째 비트만 1인 값을 구해서 16진수와 10진수로 출력하는 프로그램을 작성하시오.

   * 작성자: 이상엽_202111022_영어교육과

   * 날짜: 2025.04.16.

   * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>


void assign_17()
{
    int bit7 = 1 << 7;
    int bit15 = 1 << 15;
    int bit23 = 1 << 23;
    int bit31 = 1 << 31;  // 부호 있는 정수형 사용 (for 음수표현)

    // 출력: 8자리 16진수 + 10진수 값
    printf("7번 비트만 1인 값   : %08X %d\n", bit7, bit7);
    printf("15번 비트만 1인 값  : %08X %d\n", bit15, bit15);
    printf("23번 비트만 1인 값  : %08X %d\n", bit23, bit23);
    printf("31번 비트만 1인 값  : %08X %d\n", bit31, bit31);

    return;
}

int main()
{
    assign_17();

    return 0;

}