// 2�� n���� ���ϴ� �Լ��� ��������� �����غ���. �׸��� �׿� ���� ������ main �Լ��� ����! 

#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int Power(int n)
{
	if (n == 0)
		return 1;
	return Power(n - 1) * 2;
}

int main(void)
{
	int num;

	printf("���� �Է� : ");
	scanf("%d", &num);

	printf("2�� %d���� %d \n", num, Power(num));
	return 0;;
}
