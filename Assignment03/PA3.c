/*
 * ���ϸ�: PA3.c

 * ����: ������ ���̸� �Է¹޾� ��ġ�������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
		 ������ kg ������ �Է¹ް�, ���̴� m ������ �Է¹޴´�.

 * �ۼ���: ������

 * ��¥: 2025.04.04.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assign_03()
{
	float m, kg;
	printf("����(kg) ? ");
	scanf("%f", &kg);
	printf("����(m) ? ");
	scanf("%f", &m);
	printf("��ġ������ : %f J\n", kg * 9.8 * m);
}

int main()
{
	assign_03();
	return 0;
}