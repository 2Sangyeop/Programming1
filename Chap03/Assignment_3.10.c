/*
   * ���ϸ�: assign_10.c

   * ����: ��/�޷� ȯ���� �޷��� �Է¹޾� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

   * �ۼ���: �̻�_202111022_�������

   * ��¥: 2025.04.04.

   * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>


void assign_10()
{
	double dollar; //�޷� ��
	double rate; // ȯ��

	printf("USD? ");
	scanf("%lf", &dollar);

	printf("��/�޷� ȯ��? ");
	scanf("%lf", &rate);

	printf("USD %.2lf = KRW %.2lf", dollar, dollar * rate);

	return 0;

}

int main()
{
	assign_10();

	return 0;
}