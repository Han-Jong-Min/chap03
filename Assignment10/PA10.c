/*
 * ���ϸ�: PA10.c

 * ����: ��/�޷� ȯ���� �޷��� �Է¹޾� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.04.04.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assign_10()
{
	float won, dollar, rate;
	printf("USD ? ");
	scanf("%f", &dollar);
	printf("��/�޷� ȯ�� ? ");
	scanf("%f", &rate);
	won = rate * dollar;
	printf("USD %.2f = KRW %.2f \n", dollar, won);
}

int main()
{
	assign_10();
	return 0;
}