/*****************************************************************************************************
   * ���ϸ�: assign_01.c

   * ����: ���� ��ǥ (x, y)�� �Է¹޾� ��ũ�� ���� ���� ���� ���� ������ �˻��ϴ� ���α׷��� �ۼ��Ͻÿ�.
            ��ũ�� ���� ���� ������ ���簢�� ����� �������� ���簢���� �»������ ���ϴ����� ���ؼ� �����ȴ�.

   * �ۼ���: �̻�_202111022_�������

   * ��¥: 2025.04.22.

   * ����: v1.0

 *******************************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assign_01(void);
int selectedSpace();

//assign_01�Լ� ȣ��
int main()

{
    assign_01();

    return 0;
}

// �»����, ���ϴ���, ������ǥ(x, y) �Է¹޾� ����
// selectedSpace�� ���� ���ÿ��� ���� ������ �ƴ����� ������, ����� �ֿܼ� ���
int assign_01(void)
{
    int left, right, top, bottom, x, y;

    printf("���� ������ �»���� (left, top)? ");
    scanf("%d %d", &left, &top);   // �»����

    printf("���� ������ ���ϴ��� (right, bottom)? ");
    scanf("%d %d", &right, &bottom); //���ϴ���

    printf("���� ��ǥ(x, y)? ");
    scanf("%d %d", &x, &y); // ������ǥ (x, y)


    if (selectedSpace(left, right, top, bottom, x, y))
    {
        printf("���簢�� ����� ���� ���� ���� ���Դϴ�.");
    }
    else
    {
        printf("���簢�� ����� ���� ���� ���� ���� �ƴմϴ�.");
    }
    return 0;
}


// ���ÿ��� ���� ���� �ִ��� ����ϴ� �Լ�
int selectedSpace(int left, int right, int top, int bottom, int x, int y)
{
    if (x >= left && x <= right && y >= top && y <= bottom)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}