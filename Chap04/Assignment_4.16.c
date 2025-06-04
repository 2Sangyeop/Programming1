/*
   * ���ϸ�: assign_16.c

   * ����: 0~255������ ���� red, green, blue�� ������ 3�� �Է¹޾Ƽ�
        RGB������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�
        * RGB������ ����� ���� ����Ʈ ������ ���� �˾ƺ��� ������ 16������ ����Ѵ�.

   * �ۼ���: �̻�_202111022_�������

   * ��¥: 2025.04.16.

   * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>


void assign_16()
{
    int red_input, green_input, blue_input;
    unsigned char red, green, blue;

    // �Է�
    printf("red? ");
    scanf("%d", &red_input);
    printf("green? ");
    scanf("%d", &green_input);
    printf("blue? ");
    scanf("%d", &blue_input);

    // �����÷ο� 
    red = (unsigned char)red_input;
    green = (unsigned char)green_input;
    blue = (unsigned char)blue_input;

    // RGB�� �ϳ��� Ʈ���÷� ������ ����
    unsigned int true_color = (red << 16) | (green << 8) | blue;

    // Ʈ���÷� ��� (�ҹ��� 16����, 6�ڸ�)
    printf("RGB Ʈ���÷�: %06x\n", true_color);


    return;
}

int main()
{
    assign_16();

    return 0;

}