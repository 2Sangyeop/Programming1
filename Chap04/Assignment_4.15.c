/*
   * 파일명: assign_15.c

   * 내용: 환전수수료율은 1.75%로 정해져있다고 가정하고 원-달러 매매기준율과 환전우대율(%)를 입력받아
		달러를 살 때 적용되는 환율을 결정하고, 구입하고자하는 달러가 얼마인지 입력받아서
		 몇 원에 해당하는지 출력하는 프로그램을 작성하시오.

   * 작성자: 이상엽_202111022_영어교육과

   * 날짜: 2025.04.16.

   * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>


void assign_15()
{
	double a = 0; // 매매기준율
	double b = 0; // 환전우대율
	double c = 0.0175; // 환전수수료율
	float dollar = 0; // 구입할 달러

	printf("원/달러 매매기준율? ");
	scanf("%lf", &a);

	printf("환전우대율(0~100%%)? ");
	scanf("%lf", &b);
	b = b / 100.0;

	double d = a + (a * c * (1 - b)); // 현찰 매입 시 환율
	printf("달러 살 때 환율은 %lf입니다.\n", d);

	printf("구입할 달러(USD)? ");
	scanf("%f", &dollar);

	printf("USD %.2f 살 때 ==> KRW %.2f", dollar, dollar * d);

	return;
}

int main()
{
	assign_15();

	return 0;

}