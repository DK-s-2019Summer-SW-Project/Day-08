// 프로그램 사용자로부터 영단어를 입력 받는다, 그리고 나서 입력 받은 영단어를 구성하는 문자 중에서 ASC코드 값이 가장 큰 문자를 찾아서 출력하는 코드를 작성


#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{

	char voca[100];
	int len = 0, i;
	char max = 0;

	printf("insert the word: ");
	scanf("%s", voca); // 왜 이렇게 실행이 되는지 기억! 만약 기억이 나지 않을 경우 Remember를 탐색!

	while (voca[len] != '\0')
		len++;
	// 아래의 알고리즘이 이해가 가지 않는다. 해결! --> 아래에 정리 했음
	for (i = 0; i < len; i++)
	{
		if (max < voca[i])
			max = voca[i];
	}
	printf("the largest ASC code is %c\n", max);
	return 0;
}

// 영단어를 입력 받는 것 까지는 만들 수 있으나 뒤에 그 수들을 비교하여 ASC코드로 반환해서 비교하는 것은 어떻게 해야 할지 감이 안온다.


// for구문 설명
// max = 0 이다. 입력을 ABC를 했다고 가정
// for(i = 0; i< len; i++)
// if(max<voca[i]) --> 일단 max와 voca[i]를 비교 한다. max는 0이고 voca[a]는 65이므로 max의 값에 vaca[a]가 저장
// max = voca[i]  --> 이제 max에 voca[a]의 값이 저장 된다
// 다시 for로 돌아가 나머지 B,C에 대하여 비교를 실행 한다. 만약 더 크다면 더 큰 값으로 변경 되고 나머지가 작다면 그래도 유지!!