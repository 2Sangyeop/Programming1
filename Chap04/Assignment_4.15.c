/*
   * ���ϸ�: assign_15.c

   * ����: ȯ������������ 1.75%�� �������ִٰ� �����ϰ� ��-�޷� �Ÿű������� ȯ�������(%)�� �Է¹޾�
		�޷��� �� �� ����Ǵ� ȯ���� �����ϰ�, �����ϰ����ϴ� �޷��� ������ �Է¹޾Ƽ�
		 �� ���� �ش��ϴ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

   * �ۼ���: �̻�_202111022_�������

   * ��¥: 2025.04.16.

   * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>


void assign_15()
{
	double a = 0; // �Ÿű�����
	double b = 0; // ȯ�������
	double c = 0.0175; // ȯ����������
	float dollar = 0; // ������ �޷�

	printf("��/�޷� �Ÿű�����? ");
	scanf("%lf", &a);

	printf("ȯ�������(0~100%%)? ");
	scanf("%lf", &b);
	b = b / 100.0;

	double d = a + (a * c * (1 - b)); // ���� ���� �� ȯ��
	printf("�޷� �� �� ȯ���� %lf�Դϴ�.\n", d);

	printf("������ �޷�(USD)? ");
	scanf("%f", &dollar);

	printf("USD %.2f �� �� ==> KRW %.2f", dollar, dollar * d);

	return;
}

int main()
{
	assign_15();

	return 0;

}