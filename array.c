// About the array.
// �迭�̶� �ټ��� �����͸� �����ϰ� ó���ϴ� ��쿡 �����ϰ� ��� �� �� �ִ� ���� �迭�̶�� �Ѵ�.
// �迭�� �Ϲ����� ������ �޸� �������� ���� ���� �� �� �ִ�. �������� ������ �𿩼� �迭�� �̷�� �����̴�.
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int arr[5]; // ���̰� 5�� �迭�� ����
	int sum = 0, i;

	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50; // �� �迭�� � ���� ���� �� ������ �ϴ� �����̴�

	for (i = 0; i < 5; i++)
	{
		sum += arr[i];
	}
	printf("�迭�� ��ҿ� ���� �� ��: %d\n", sum);


	return 0;
}
// �迭�� ��� ��Ҵ� �ݺ����� �̿��Ͽ� ���������� ���� �ϴ� ���� �����ϴ�.
// �Ʒ��� ���� �迭�� �����ϰ� ���ÿ� �ʱ�ȭ �� �� �ִ�.

int main()
{
	int arr1[5] = { 0, 1, 2, 3, 4 };
	int arr2[] = { 1, 2, 3, 4, 5, 6, 7 };
	int arr3[5] = { 1, 2, 3, 4, 5 };
	int ar1len, ar2len, ar3len, i;

	printf("The size of the arr1 is:%d", sizeof(arr1));
	printf("The size of the arr2 is: %d", sizeof(arr2));
	printf("The soze of the arr3 is: %d", sizeof(arr3));

	ar1len = sizeof(arr1) / sizeof(int); // �迭 arr1�� ���̸� ��� --> �迭�� ���̸� ����ϰ� ���� ��� �̷� �ڵ���� ����ؾ� �Ѵ�. 
	ar2len = sizeof(arr2) / sizeof(int);  // �迭 arr2�� ���̸� ���
	ar3len = sizeof(arr3) / sizeof(int); // �迭 arr3�� ���̸� ���

	for (i = 0; i < ar1len; i++)
	{
		printf("%d", arr1[i]);
	}
	printf("\n");

	for (i = 0; i < ar2len; i++)
		printf("%d", arr2[i]);
	printf("\n");

	for (i = 0; i < ar3len; i++)
		printf("%d", arr3[i]);
	printf("\n");

	return 0;
}

// �迭�� �̸��� ������� �ϴ� sizeof ������ ����δ� ����Ʈ ������ �迭ũ�Ⱑ ��ȯ�ȴ�. 