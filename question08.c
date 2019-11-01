// 2의 n승을 구하는 함수를 재귀적으로 구현해보자. 그리고 그에 따른 적절한 main 함수도 구현! 

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

	printf("정수 입력 : ");
	scanf("%d", &num);

	printf("2의 %d승은 %d \n", num, Power(num));
	return 0;;
}
