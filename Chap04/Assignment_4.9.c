/*
   * 파일명: assign_09.c

   * 내용: 동영상의 재생시간을 초 단위로 입력받아 몇 시간 몇 분 몇 초인지 출력하는 프로그램을 작성하시오.

   * 작성자: 이상엽_202111022_영어교육과

   * 날짜: 2025.04.16.

   * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>


void assign_09()
{
	int hour = 0;
	int min = 0;
	int sec = 0;


	printf("재생시간(초)? ");
	scanf("%d", &sec);

	hour = sec / 3600;
	min = (sec % 3600) / 60;
	sec = sec % 60;


	if (hour == 0 && min == 0)
	{
		printf("재생시간은 %d초입니다.\n", sec % 60);
	}
	else if (hour == 0)
	{
		printf("재생시간은 %d분 %d초입니다.\n", min, sec % 60);
	}
	else if (min == 0)
	{
		printf("재생시간은 %d시간 %d초입니다.\n", hour, sec % 60);
	}
	else
	{
		printf("재생시간은 %d시간 %d분 %d초입니다.\n", hour, min, sec % 60);
	}

	return 0;

}

int main()
{
	assign_09();

	return 0;
}