/*
   * 파일명: assign_02.c

   * 내용: 가로의 길이와 세로의 길이를 입력받아 직사각형의 넓이와 둘레를 구하는 프로그램을 작성하시오.

   * 작성자: 이상엽_202111022_영어교육과

   * 날짜: 2025.04.04.

   * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>


void assign_02()
{
	int width;
	int length;

	printf("가로의 길이 ? ");
	scanf("%d", &width);

	printf("세로의 길이 ? ");
	scanf("%d", &length);

	printf("직사각형의 넓이: %d\n", width * length);
	printf("직사각형의 둘레: %d", width * 2 + length * 2);

	return 0;

}

int main()
{
	assign_02();

	return 0;
}