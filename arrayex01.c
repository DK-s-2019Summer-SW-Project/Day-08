// 프로그램 사용자로 부터 하나의 영단어를 입력 받아서 입력 받은 영단어의 길이를 계산하여 출력 하는 프로그램
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	char voca[100];// 입력 받는 단어의 크기를 할당하기 위해 배열을 선언하고 범위를 100으로 설정 
	int len = 0; // 이거는 단어의 길이가 얼만큼인지 나타내는 변수

	printf("insert a word: ");
	scanf("%s", voca); // 입력 받은 단어는 voca에 할당 한다. 앞의 예제와 활용법이 동일

	while (voca[len] != 0) //NULL문자가 들어간 것과 동일하다. --> 난 이런 알고리즘을 생각해내기 어렵던데.. 
		// 쉽게 표현해서 0이 나오기 전까지 카운트를 올리는 것이다. 
		len++; // 배열인 voca 안에 자리가 하나씩 찰떄 마다 len을 하나씩 증가시킨다.  --> 참고로 voca에는 입력 받고 나머지 빈 부분은 0으로 채워지므로 배열의 끝을 파악 할 수 있다.
	printf("the length of the word is %d\n", len);

	return 0;
}