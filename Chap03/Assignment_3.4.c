/*
   * ���ϸ�: assign_04.c

   * ����: ��ü�� �ۿ��� ���� ũ��� ���� �������� �̵��� �Ÿ��� �Է¹޾� �� ���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
			���� ũ��� N ������ �Է¹ް�, �̵��� �Ÿ��� m ������ �Է¹޴´�.

   * �ۼ���: �̻�_202111022_�������

   * ��¥: 2025.04.04.

   * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>


void assign_04()
{
	float power;
	float distance;

	printf("��(N)? ");
	scanf("%f", &power);

	printf("�̵��Ÿ�(m)? ");
	scanf("%f", &distance);

	printf("���� ��: %.2f J", power * distance);

	return 0;

}

int main()
{
	assign_04();

	return 0;
}