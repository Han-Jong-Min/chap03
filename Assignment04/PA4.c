/*
 * ���ϸ�: PA4.c

 * ����: ��ü�� �ۿ��� ���� ũ��� ���� �������� �̵��� �Ÿ��� �Է¹޾� �� ���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
		 ���� ũ��� N ������ �Է¹ް�, ���� �������� �̵��� �Ÿ��� m ������ �Է¹޴´�.

 * �ۼ���: ������

 * ��¥: 2025.04.04.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assign_04()
{
	float power, m;
	printf("��(N) ? ");
	scanf("%f", &power);
	printf("�̵� �Ÿ�(m) ? ");
	scanf("%f", &m);
	printf("���� �� : %.2f J\n", power * m);
}

int main()
{
	assign_04();
	return 0;
}