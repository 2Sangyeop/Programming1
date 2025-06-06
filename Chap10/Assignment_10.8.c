/*****************************************************************************************************
   * ���ϸ�: assign_08.c

   * ����: Ŀ�Ǽ󿡼� �ǸŵǴ� ��ǰ ������ ��Ÿ���� PRODUCT ����ü�� �����Ͻÿ�. �� ��ǰ���� ��ǰ��, ����, ���
           ������ �� �־�� �Ѵ�. PRODUCT ����ü�� �Ű������� ���޹޾� ��ǰ ������ ����ϴ� print_product �Լ���
           �����Ͻÿ�. PRODUCT ����ü ������ ������ ���� ��ǰ��, ����, ��� �Է¹޾� �����ϰ� ����ϴ� ���α׷���
           �ۼ��Ͻÿ�. ����� ��ǰ���� ��ĭ ���� �� �ܾ�� �Է��Ѵ�.

   * �ۼ���: �̻�

   * ��¥: 2025.06.06

   * ����: v1.0

 *******************************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_NAME 20

struct PRODUCT 
{
    char name[MAX_NAME]; // ��ǰ��
    int price;           // ����
    int many;           // ���
};

void print_product(struct PRODUCT p);
int assign_08(void);

int main()
{
    assign_08();
    return 0;
}

int assign_08()
{
    struct PRODUCT item;

    printf("��ǰ��? ");
    scanf("%s", item.name);

    printf("����? ");
    scanf("%d", &item.price);

    printf("���? ");
    scanf("%d", &item.many);

    print_product(item);

    return 0;
}

// ����� ����, ��� ����ϴ� �Լ�
void print_product(struct PRODUCT p)
{
    printf("[%s %d�� ���:%d]", p.name, p.price, p.many);
}