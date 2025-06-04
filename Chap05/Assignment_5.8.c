/*****************************************************************************************************
   * ���ϸ�: assign_08.c

   * ����: ��Ʈ ������ �����ϴ� ���⸦ ���α׷��Ͻÿ�.
            1) &�� ��Ʈ AND, |�� ��Ʈ OR, ^�� ��Ʈ XOR ������ ó���Ѵ�.
            2) "0xAB & 0xCC"ó�� ������� �Է��ؼ� ���� ����� ���Ѵ�.
            3) ��Ʈ �����̹Ƿ� ������� �Է¹��� �� 10����, 8����, 16������ ����� �� �ְ� �ϰ�, ������ ����� 16������ ����Ѵ�.

   * �ۼ���: �̻�_202111022_�������

   * ��¥: 2025.04.22.

   * ����: v1.0

 *******************************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assign_08(void);
int Bit(int a, int b, char op);

int main()
{
    assign_08();
    return 0;
}

// ��Ʈ ���� �Է� �� ��� ó��
int assign_08(void)
{
    int A, B;
    int result;
    char OP;

    printf("��Ʈ �����? ");
    scanf("%i %c %i", &A, &OP, &B);   // 10����/8����/16���� �Է� ����

    result = Bit(A, B, OP);

    if (result != -1)
    {
        printf("%X %c %X: %X\n", A, OP, B, result);  // ����� 16���� �빮�ڷ� ���
    }

    return 0;
}

// ��Ʈ ������ �����ϴ� �Լ�
int Bit(int a, int b, char op)
{
    int result;

    switch (op)
    {
    case '&':
        result = a & b;
        break;
    case '|':
        result = a | b;
        break;
    case '^':
        result = a ^ b;
        break;
    default:
        printf("�߸��� �������Դϴ�.\n");
        return -1;
    }

    return result;
}