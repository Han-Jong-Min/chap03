/*
 * ���ϸ�: PA6.c

 * ����: ����Ʈ�� ������ �������ͷ� �Է¹޾� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
		 1�������ʹ��� 0.3025 �� �ش��Ѵ�. ���α׷��� �ۼ��� �� �̸� �ִ� ����� �̿��غ���.

 * �ۼ���: ������

 * ��¥: 2025.04.04.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assign_06()
{
	float area;
	const float p = 0.3025f;
	printf("����Ʈ�� ����(��������) ? ");
	scanf("%f", &area);
	printf("%.2f �������� = %.2f ��\n", area, area * p);
}

int main()
{
	assign_06();
	return 0;
}