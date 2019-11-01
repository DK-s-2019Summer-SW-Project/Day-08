// 프로그램 사용자로부터 2개의 정수를 입력 받아서 구구단을 출력하는 프로그램을 작성해보자 3,5를 입력 할 경우 3,4,5단을 출력 단 입력이 자유로워야 한다. 예를 들어 3,5던 5,3,이던 같은 값을 출력해야 한다. 
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS
void NineNine(int num1, int num2);
int main(void)
{
	int num1, num2;

	printf("두개의 정수 입력 : ");
	scanf("%d %d", &num1, &num2);

	if (num1<num2)
		NineNine(num1, num2);
	else
		NineNine(num2, num1);

	return 0;
}

/* num1단부터 num2단까지 출력 */
void NineNine(int num1, int num2)
{
	int i;

	while (num1 <= num2)
	{
		for (i = 1; i<10; i++)
			printf("%d * %d = %d \n", num1, i, num1*i);
		printf("\n");
		num1++;
	}
}