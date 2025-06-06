/*****************************************************************************************************
   * ���ϸ�: assign_13.c

   * ����: ���簢�� ������ ��Ÿ���� RECT ����ü�� �����Ͻÿ�. ���簢���� ���ϴ����� ���������� �����Ǹ�
           ���� ��ǥ�� POINT ����ü�� �̿��ؼ� ��Ÿ����. ���簢�� ������ ����ϴ� print_rect�Լ��� �����ϰ�,
           RECT ����ü ������ �����ؼ� ���簢�� ������ �Է¹ް� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

   * �ۼ���: �̻�

   * ��¥: 2025.06.06

   * ����: v1.0

 *******************************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct POINT 
{
    int x;
    int y;
};

struct RECT 
{
    struct POINT left_bottom; // ���ϴ���
    struct POINT right_top;   // ������
};

void print_rect(struct RECT r);
int assign_13(void);

int main()
{
    assign_13();
    return 0;
}

// ���簢�� ���� �Է��Լ�
int assign_13()
{
    struct RECT rect;

    printf("���簢���� ���ϴ���(x,y)? ");
    scanf("%d %d", &rect.left_bottom.x, &rect.left_bottom.y);

    printf("���簢���� ������(x,y)? ");
    scanf("%d %d", &rect.right_top.x, &rect.right_top.y);

    // ���
    print_rect(rect);

    return 0;
}

// �Է¹��� ������ ����ϴ� �Լ�
void print_rect(struct RECT r)
{
    printf("[RECT ���ϴ���:(%d, %d) ������:(%d, %d)]\n",
        r.left_bottom.x, r.left_bottom.y, r.right_top.x, r.right_top.y);
}