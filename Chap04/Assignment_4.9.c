/*
   * ���ϸ�: assign_09.c

   * ����: �������� ����ð��� �� ������ �Է¹޾� �� �ð� �� �� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

   * �ۼ���: �̻�_202111022_�������

   * ��¥: 2025.04.16.

   * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>


void assign_09()
{
	int hour = 0;
	int min = 0;
	int sec = 0;


	printf("����ð�(��)? ");
	scanf("%d", &sec);

	hour = sec / 3600;
	min = (sec % 3600) / 60;
	sec = sec % 60;


	if (hour == 0 && min == 0)
	{
		printf("����ð��� %d���Դϴ�.\n", sec % 60);
	}
	else if (hour == 0)
	{
		printf("����ð��� %d�� %d���Դϴ�.\n", min, sec % 60);
	}
	else if (min == 0)
	{
		printf("����ð��� %d�ð� %d���Դϴ�.\n", hour, sec % 60);
	}
	else
	{
		printf("����ð��� %d�ð� %d�� %d���Դϴ�.\n", hour, min, sec % 60);
	}

	return 0;

}

int main()
{
	assign_09();

	return 0;
}