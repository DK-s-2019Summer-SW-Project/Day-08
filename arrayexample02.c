// char�� 1���� �迭�� ����� ���ÿ� ���� ������ �������� �ʱ�ȭ �ϰ�, �ʱ�ȭ ���Ŀ��� ���� �� ������ ����ϴ� ������ �ۼ�

#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	char str[] = { 'a', 'b', 'c', 'd', 'e' };
	int arrLen = sizeof(str) / sizeof(char); // �迭�� ���̸� ����ϴ� �ڵ�� �̷��� ����Ѵ�! �ϱ�!!
	int i;
	for (i = 0; i < arrLen; i++)

		printf("%c", str[i]);
	printf("\n");


	return 0;
}