/*
   * ���ϸ�: assign_01.c

   * ����: ������ �ӷ��� �Ǽ��� �Է¹޾� � �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
			������ kg����, �ӷ��� m/s������ �Է¹޴´�.

   * �ۼ���: �̻�_202111022_�������

   * ��¥: 2025.04.16.

   * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>


void assign_01()
{
	float weight, fast = 0;

	printf("����(kg)? ");
	scanf("%f", &weight);

	printf("�ӷ�(m/s)? ");
	scanf("%f", &fast);

	printf("�������: %.2f J", 0.5 * weight * fast * fast);
	return 0;

}

int main()
{
	assign_01();

	return 0;
}