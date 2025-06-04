/*
   * 파일명: assign_01.c

   * 내용: 질량과 속력을 실수로 입력받아 운동 에너지를 구하는 프로그램을 작성하시오.
			질량은 kg단위, 속력은 m/s단위로 입력받는다.

   * 작성자: 이상엽_202111022_영어교육과

   * 날짜: 2025.04.16.

   * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>


void assign_01()
{
	float weight, fast = 0;

	printf("질량(kg)? ");
	scanf("%f", &weight);

	printf("속력(m/s)? ");
	scanf("%f", &fast);

	printf("운동에너지: %.2f J", 0.5 * weight * fast * fast);
	return 0;

}

int main()
{
	assign_01();

	return 0;
}