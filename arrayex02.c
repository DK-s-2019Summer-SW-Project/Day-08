// 프로그램 사용자로부터 영단어를 입력 받아서 char형 배열에 저장한다. 그 다음 배열에 저장된 영단어를 역순으로 뒤집는다. 물론 이때 NULL문자의 위치를 변경해서는 안되며, 뒤집은 후의 결과를 출력
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	char voca[100];
	int len = 0, i;
	char temp; // 역순으로 뒤집기 위해 선언을 했다.

	printf("insert the word: ");
	scanf("%s", voca);

	while (voca[len] != '\0')
		len++; // 앞에서 언급한 것과 같이 배열이 길이 및 어디서 부터 시작해서 끝나는 지를 연산하는 코드이다. 

	// 아래 부분 코드가 이해가 가지 않는다. --> 해결
	for (i = 0; i < len / 2; i++)
	{
		temp = voca[i]; // 일단 temp에 voca[i]의 값을 저장 한다
		voca[i] = voca[(len - i) - 1]; // 그리고 voca[i]의 값을 변환 한다. 
		voca[(len - i) - 1] = temp; // 역으로 반환한 값을 저장 한다.

	}
	printf("The reflected result is %s\n", voca);
	return 0;
}

//나의 가장 큰 의문은 어떻게 역순으로, 뒤에 끝자리를 변경하지 않으면서 출력을 하는가 이다. 
// 글자를 뒤집는 연산은 love를 예를 들면 Phase1: eovl 처럼 먼저 첫번쨰 와 마지막을 변경 하였고 phase2 의 경우 남은 두 부분을 변경하여 역순을 출력 하는 원리이다.
// 물론 두 문자를 바꾸는 횟수는 단어의 길이에 따라 달라진다, 이를 위해서 영단어의 길이의 반에 해당하는 수만큼 두 문자를  바구는 과정을 거치도록 반복문을 구성하였다.
// for문 해설
// 예를 들어 ABCDE를 입력 했다고 가정한다. 그러면 len은5이다
// tmep = voca[i] --> tmep = voca[0] = A가 저장이 될 것이다
// voca[i] = voca[(len-i)-1] --> voca[0] = voca[(9-0)-1] = voca[8]
// voca[i] = tmep --> voca[8]의 값이 tmep에 저장 된다. 
// 이런 원리로 역순이 발생하게 된다. 