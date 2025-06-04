/*****************************************************************************************************
   * 파일명: assign_08.c

   * 내용: 비트 연산을 수행하는 계산기를 프로그램하시오.
            1) &는 비트 AND, |는 비트 OR, ^는 비트 XOR 연산을 처리한다.
            2) "0xAB & 0xCC"처럼 연산식을 입력해서 연산 결과를 구한다.
            3) 비트 연산이므로 연산식을 입력받을 때 10진수, 8진수, 16진수를 사용할 수 있게 하고, 연산의 결과는 16진수로 출력한다.

   * 작성자: 이상엽_202111022_영어교육과

   * 날짜: 2025.04.22.

   * 버전: v1.0

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

// 비트 연산 입력 및 출력 처리
int assign_08(void)
{
    int A, B;
    int result;
    char OP;

    printf("비트 연산식? ");
    scanf("%i %c %i", &A, &OP, &B);   // 10진수/8진수/16진수 입력 가능

    result = Bit(A, B, OP);

    if (result != -1)
    {
        printf("%X %c %X: %X\n", A, OP, B, result);  // 결과는 16진수 대문자로 출력
    }

    return 0;
}

// 비트 연산을 수행하는 함수
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
        printf("잘못된 연산자입니다.\n");
        return -1;
    }

    return result;
}