/*
 * ���ϸ�: assign_11.c
 * ����: ������ ���� ���� 3.14159265��� �� ��, ���� ���� ���� ���� ������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
        + �Ҽ��� ���� 2�ڸ�����, 4�ڸ�����, 6�ڸ�����, 8�ڸ����� ���� ����ϰ�, ����ǥ��ε� ����Ѵ�.
 * �ۼ���: �̻�
 * �й�: 202111022
 * �ۼ���: 2025.3.31
 * ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double pi;
    pi = 3.14159265;

    printf("pi = %.2lf \n", pi);
    printf("pi = %.4lf \n", pi);
    printf("pi = %.6lf \n", pi);
    printf("pi = %.8lf \n", pi);
    printf("pi = %e \n", pi);

    return 0;
}