/*
   * ���ϸ�: assign_01.c

   * ����: �� ���� ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

   * �ۼ���: �̻�_202111022_�������

   * ��¥: 2025.04.04.

   * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>


void assign_01()
{
	int num;

	printf("�� ���� ���� ? ");
	scanf("%d", &num);

	printf("���簢���� ����: %d\n", num * num);
	printf("���簢���� �ѷ�: %d", num * 4);

	return 0;

}

int main()
{
	assign_01();

	return 0;
}