/*
   * 파일명: assign_02.c

   * 내용: 화씨온도(F)를 실수로 입력받아 섭씨 온도(C)로 변환해서 출력하는 프로그램을 작성하시오.
			화씨 온도를 섭씨 온도로 변환하는 공식은 다음과 같다.

   * 작성자: 이상엽_202111022_영어교육과

   * 날짜: 2025.04.16.

   * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>


void assign_02()
{
	float temp = 0.0;

	printf("화씨온도? ");
	scanf("%f", &temp);

	printf("%.2f F = %.2f C", temp, (temp - 32.0) * (5.0 / 9.0));
	return 0;

}

int main()
{
	assign_02();

	return 0;
}