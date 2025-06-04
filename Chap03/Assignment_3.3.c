/*
   * 파일명: assign_03.c

   * 내용: 질량과 높이를 입력받아 위치 에너지를 구하는 프로그램을 작성하시오.
		   질량은 kg 단위, 높이는 m 단위로 입력받는.

   * 작성자: 이상엽_202111022_영어교육과

   * 날짜: 2025.04.04.

   * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>


void assign_03()
{
	float weight;
	float height;

	printf("질량(kg)? ");
	scanf("%f", &weight);

	printf("높이(m)? ");
	scanf("%f", &height);

	printf("위치에너지: %f J", 9.8 * weight * height);

	return 0;

}

int main()
{
	assign_03();

	return 0;
}