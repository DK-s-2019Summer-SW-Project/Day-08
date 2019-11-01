// About the array.
// 배열이란 다수의 데이터를 저장하고 처리하는 경우에 유용하게 사용 할 수 있는 것을 배열이라고 한다.
// 배열은 일반적인 변수와 달리 여러개의 값을 저장 할 수 있다. 여러개의 변수가 모여서 배열을 이루기 때문이다.
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int arr[5]; // 길이가 5인 배열을 선언
	int sum = 0, i;

	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50; // 각 배열에 어떤 값을 넣을 지 결정을 하는 구성이다

	for (i = 0; i < 5; i++)
	{
		sum += arr[i];
	}
	printf("배열의 요소에 저장 된 값: %d\n", sum);


	return 0;
}
// 배열의 모든 요소는 반복문을 이용하여 순차적으로 접근 하는 것이 가능하다.
// 아래와 같이 배열을 선언하고 동시에 초기화 할 수 있다.

int main()
{
	int arr1[5] = { 0, 1, 2, 3, 4 };
	int arr2[] = { 1, 2, 3, 4, 5, 6, 7 };
	int arr3[5] = { 1, 2, 3, 4, 5 };
	int ar1len, ar2len, ar3len, i;

	printf("The size of the arr1 is:%d", sizeof(arr1));
	printf("The size of the arr2 is: %d", sizeof(arr2));
	printf("The soze of the arr3 is: %d", sizeof(arr3));

	ar1len = sizeof(arr1) / sizeof(int); // 배열 arr1의 길이를 계산 --> 배열의 길이를 계산하고 싶은 경우 이런 코드들을 사용해야 한다. 
	ar2len = sizeof(arr2) / sizeof(int);  // 배열 arr2의 길이를 계산
	ar3len = sizeof(arr3) / sizeof(int); // 배열 arr3의 길이를 계산

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

// 배열의 이름을 대상으로 하는 sizeof 연산의 결과로는 바이트 단위의 배열크기가 반환된다. 