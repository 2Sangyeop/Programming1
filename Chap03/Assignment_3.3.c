/*
   * ���ϸ�: assign_03.c

   * ����: ������ ���̸� �Է¹޾� ��ġ �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
		   ������ kg ����, ���̴� m ������ �Է¹޴�.

   * �ۼ���: �̻�_202111022_�������

   * ��¥: 2025.04.04.

   * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>


void assign_03()
{
	float weight;
	float height;

	printf("����(kg)? ");
	scanf("%f", &weight);

	printf("����(m)? ");
	scanf("%f", &height);

	printf("��ġ������: %f J", 9.8 * weight * height);

	return 0;

}

int main()
{
	assign_03();

	return 0;
}