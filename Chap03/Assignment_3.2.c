/*
   * ���ϸ�: assign_02.c

   * ����: ������ ���̿� ������ ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

   * �ۼ���: �̻�_202111022_�������

   * ��¥: 2025.04.04.

   * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>


void assign_02()
{
	int width;
	int length;

	printf("������ ���� ? ");
	scanf("%d", &width);

	printf("������ ���� ? ");
	scanf("%d", &length);

	printf("���簢���� ����: %d\n", width * length);
	printf("���簢���� �ѷ�: %d", width * 2 + length * 2);

	return 0;

}

int main()
{
	assign_02();

	return 0;
}