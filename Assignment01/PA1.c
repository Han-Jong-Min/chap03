/*
 * ���ϸ�: PA1.c

 * ����: �� ���� ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.04.04.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assign_01()
{
	int a;
	printf("�� ���� ���� ? ");
	scanf("%d", &a);
	printf("���簢���� ���� : %d\n", a * a);
	printf("���簢���� �ѷ� : %d\n", a * 4);

}

int main()
{
	assign_01();

	return 0;
}



