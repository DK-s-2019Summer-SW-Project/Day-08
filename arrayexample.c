// ���̰� 5�� int�� �迭�� �����ؼ� ���α׷� ����ڷκ��� �� 5���� ������ �Է� �ް� �Է� �� ���� �� �ִ� ��, �ּ� ��, ���� ���� ����Ѵ�.
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int arr[5];
	int max, min, total, i;

	for (i = 0; i < 5; i++)
	{
		printf("insert the five number: ");
		scanf_s("%d", &arr[i]); // �̷��� ������ �ϸ� ���� %d�� 5�� �Է� �� �ʿ䰡 ����! �׳� ������ �迭�� ������ ok!
	}

	max = min = total = arr[0];

	for (i = 1; i < 5; i++)
	{
		total += arr[i];
		// �� �κ� ������ ���ذ� ���� �ʴ´�. --> �ذ� �̰Ŵ� �ٷ� ���� ���� ������ ������ �����ϴ�. �װ��� ����!!
		if (max < arr[i]) 
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}

	printf("the biggest nuber is %d\n", max);
	printf("The least number is %d\n", min);
	printf("total is %d\n", total);
	return 0;
}