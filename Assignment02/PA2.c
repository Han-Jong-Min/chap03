/*
 * ���ϸ�: PA2.c

 * ����: ������ ���̿� ������ ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.04.04.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assign_02()
{
	int a, b;
	printf("������ ���� ? ");
	scanf("%d", &a);
	printf("������ ���� ? ");
	scanf("%d", &b);
	printf("���簢���� ���� : %d\n", a * b);
	printf("���簢���� �ѷ� : %d\n", (a + b) * 2);
}

int main()
{
	assign_02();
	return 0;
}