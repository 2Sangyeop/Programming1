/*
   * ���ϸ�: assign_08.c

   * ����: �������� ���̸� �Է¹޾� ���� ���Ǹ� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
			�̶� ���̴� 3.141592��� ����.

   * �ۼ���: �̻�_202111022_�������

   * ��¥: 2025.04.16.

   * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <math.h>

void assign_08()
{
	float x = 0.0; // x = ���������� y = ����

	printf("�������� ����? ");
	scanf("%f", &x);

	float y = 4.0f / 3.0f * 3.141592 * pow(x, 3);
	printf("���� ����: %f", y);

	return 0;

}

int main()
{
	assign_08();

	return 0;
}