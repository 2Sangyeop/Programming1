/*
   * 파일명: assign_10.c

   * 내용: 월/달러 환율과 달러를 입력받아 몇 원인지 출력하는 프로그램을 작성하시오.

   * 작성자: 이상엽_202111022_영어교육과

   * 날짜: 2025.04.04.

   * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>


void assign_10()
{
	double dollar; //달러 값
	double rate; // 환율

	printf("USD? ");
	scanf("%lf", &dollar);

	printf("원/달러 환율? ");
	scanf("%lf", &rate);

	printf("USD %.2lf = KRW %.2lf", dollar, dollar * rate);

	return 0;

}

int main()
{
	assign_10();

	return 0;
}