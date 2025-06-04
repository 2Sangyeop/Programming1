/*
   * 파일명: assign_01.c

   * 내용: 한 변의 길이를 입력받아 정사각형의 넓이와 둘레를 구하는 프로그램을 작성하시오.

   * 작성자: 이상엽_202111022_영어교육과

   * 날짜: 2025.04.04.

   * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>


void assign_01()
{
	int num;

	printf("한 변의 길이 ? ");
	scanf("%d", &num);

	printf("정사각형의 넓이: %d\n", num * num);
	printf("정사각형의 둘레: %d", num * 4);

	return 0;

}

int main()
{
	assign_01();

	return 0;
}