/*
   * 파일명: assign_16.c

   * 내용: 0~255사이의 값을 red, green, blue의 순서로 3개 입력받아서
        RGB색상을 만들어서 출력하는 프로그램을 작성하시오
        * RGB색상을 출력할 때는 바이트 단위로 값을 알아보기 쉽도록 16진수로 출력한다.

   * 작성자: 이상엽_202111022_영어교육과

   * 날짜: 2025.04.16.

   * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>


void assign_16()
{
    int red_input, green_input, blue_input;
    unsigned char red, green, blue;

    // 입력
    printf("red? ");
    scanf("%d", &red_input);
    printf("green? ");
    scanf("%d", &green_input);
    printf("blue? ");
    scanf("%d", &blue_input);

    // 오버플로우 
    red = (unsigned char)red_input;
    green = (unsigned char)green_input;
    blue = (unsigned char)blue_input;

    // RGB를 하나의 트루컬러 값으로 결합
    unsigned int true_color = (red << 16) | (green << 8) | blue;

    // 트루컬러 출력 (소문자 16진수, 6자리)
    printf("RGB 트루컬러: %06x\n", true_color);


    return;
}

int main()
{
    assign_16();

    return 0;

}