// 길이가 5인 int형 배열을 선언해서 프로그램 사용자로부터 총 5개의 정수를 입력 받고 입력 된 정수 중 최댓 값, 최소 값, 최종 합을 출력한다.
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int arr[5];
	int max, min, total, i;

	for (i = 0; i < 5; i++)
	{
		printf("insert the five number: ");
		scanf_s("%d", &arr[i]); // 이렇게 선언을 하면 굳이 %d를 5번 입력 할 필요가 없다! 그냥 선언한 배열을 넣으면 ok!
	}

	max = min = total = arr[0];

	for (i = 1; i < 5; i++)
	{
		total += arr[i];
		// 이 부분 로직이 이해가 가지 않는다. --> 해결 이거는 바로 위에 사용된 로직과 완전히 동일하다. 그곳을 참조!!
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