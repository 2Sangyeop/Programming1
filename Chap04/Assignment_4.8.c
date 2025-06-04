/*
   * 파일명: assign_08.c

   * 내용: 반지름의 길이를 입력받아 구의 부피를 구하는 프로그램을 작성하시오.
			이때 파이는 3.141592라고 하자.

   * 작성자: 이상엽_202111022_영어교육과

   * 날짜: 2025.04.16.

   * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <math.h>

void assign_08()
{
	float x = 0.0; // x = 반지름길이 y = 부피

	printf("반지름의 길이? ");
	scanf("%f", &x);

	float y = 4.0f / 3.0f * 3.141592 * pow(x, 3);
	printf("구의 부피: %f", y);

	return 0;

}

int main()
{
	assign_08();

	return 0;
}