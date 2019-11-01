#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int mult(int num1, int num2)
{
	return num1*num2;
}

void ASK(void)
{
	printf("insert two number: \n");
}

int READ(void)
{
	//int num1, num2;
	////printf("insert the two numbers: \n");
	//scanf_s("%d %d", &num1, &num2);
	//return num1, num2; // 이렇게 2개씩 선언해도 괜찬은가.. -
	int num;
	scanf_s("%d", &num);
	return num;
	// 위 방법처럼 복잡하게 설정 할 필요 없이 
}

int main()
{
	int num1, num2, i, total;
	ASK();
	num1 = READ();
	num2 = READ();
	//READ();
	total = mult(num);


	return 0;
}
// 2개의 입력 변수 필요 , 구구단을 돌리기 위한 변수 필요, 예를 두 수사이가 연속일 경우 값을 출력하기 위한 변수 필요
// 구구단 출력의 경우 for문을 사용하여 구구단을 만들 예정 --> 함수로 만들어서 밖으로 뺴면 ok 
// 3,5가 입력 될 경우 3,4,5 단을 출력 하라는데.. 
// 그 가운데 수식을 뽑아낼 경우 일단 if(a*b%2 !=0) 이렇게 수식을 만들어서 실행하면 입력에서 자유로울 듯. =0일 경우 그냥 출력 없음 이렇게 만들어도 괜찬지 않을까 생각! 
// 위의 수식에 문제가 있음. 예를 들어 3,6일 경우 아무 것도 출력 안나옴 차라리 n-1이런 형식을 사용하는게 나을 듯. --> while문을 돌려야 하나.. 
// 그러나 걱정은 5,3 이렇게 입력을 하였을 경우 5단 4단 3단 이렇게 출력이 될 것 같다. 이부분의 해결에 좀 에로 사항이 있을 것 같다. 
// 그냥 일일이 함수로 선언을 하기로 마음 먹음. 
// 어떤 입력을 할 것인지 물어보는 함수
// 입력을 받아서 어떤 인자가 들어왔는지 확인 하는 함수
// 실제 구구단을 돌리는 함수
// 결과 값을 출력하는 함수
// 3,5 사이에 값이 있는지 판별하여 출력하는 함수 