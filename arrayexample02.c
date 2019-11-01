// char형 1차원 배열을 선언과 동시에 다음 문장의 내용으로 초기화 하고, 초기화 이후에는 저장 된 내용을 출력하는 예제를 작성

#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	char str[] = { 'a', 'b', 'c', 'd', 'e' };
	int arrLen = sizeof(str) / sizeof(char); // 배열의 길이를 계산하는 코드는 이렇게 사용한다! 암기!!
	int i;
	for (i = 0; i < arrLen; i++)

		printf("%c", str[i]);
	printf("\n");


	return 0;
}