/*
   * ���ϸ�: assign_02.c

   * ����: ȭ���µ�(F)�� �Ǽ��� �Է¹޾� ���� �µ�(C)�� ��ȯ�ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
			ȭ�� �µ��� ���� �µ��� ��ȯ�ϴ� ������ ������ ����.

   * �ۼ���: �̻�_202111022_�������

   * ��¥: 2025.04.16.

   * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>


void assign_02()
{
	float temp = 0.0;

	printf("ȭ���µ�? ");
	scanf("%f", &temp);

	printf("%.2f F = %.2f C", temp, (temp - 32.0) * (5.0 / 9.0));
	return 0;

}

int main()
{
	assign_02();

	return 0;
}