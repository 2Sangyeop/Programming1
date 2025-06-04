/*
   * 파일명: assign_06.c

   * 내용: 아파트의 면적을 제곱미터로 입력받아 몇 평인지 출력하는 프로그램을 작성하시오.
		   1제곱미터는 0.3025평에 해당한다. 프로그램을 작성할 때 이름 있는 상수를 이용해보자.

   * 작성자: 이상엽_202111022_영어교육과

   * 날짜: 2025.04.04.

   * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>


void assign_06()
{
	float a; // 아파트의 면적

	printf("아파트의 면적(제곱미터)? ");
	scanf("%f", &a);

	printf("%.2f 제곱미터 = %.2f", a, 0.3025 * a);

	return 0;

}

int main()
{
	assign_06();

	return 0;
}