//배열을 이용한 문자열 변수의 표현
//말 그대로 문자열 안에다가 문자를 넣어 생성 시키는 것!

#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	char str[50];  // char이란 배열안에 50bit만큼의 공간을 선언하고 그 크기 만큼의 글자를 넣겠다는 의미이다. --> 그럼 여러개의 단어도 삽입이 가능 한 부분인지? 그 부분에 대해 확인을 해보자.
	int idx = 0;

	printf("insert the letter: ");
	scanf("%s", str); // 문자열을 입력 받아서 배열 str에 저장을 한다.  여기서 주의!!!!! scanf_s의 경우는 숫자를 입력 받을 떄 사용!! 여기서는 scanf_s를 사용하면 에러가 발생한다!!
	printf("the inserted letter is: %s\n", str);

	printf("the output of the letter: ");
	while (str[idx] != '\0')
	{
		printf("%c", str[idx]);
		idx++;
	}

	printf("\n");
	return 0;
}
// scanf_s 함수를 사용해서 %s 형식 지정자로 문자를 입력을 받으면 입력되지 않는 나머지 공간에 -2 값이 채워진다
// scanf 함수에서는 %s 형식 지정자를 사용 할 떄 입력 된 문자열을 저장할 메모리 주소만 적었으면 되었지만 사용자가 문자열을 너무 길게 입력해서 지정한 메모리의 크기를 넘어서는 경우 프로그램에 버그가 발생한다
// 이런 문제를 해결하기 위해 scanf_s 함수에서 %s 형식 지정자를 사용하면 입력된 문자열을 저장 할 때 마다 메모리 주소와 그 메모리의 크기까지 같이 적어야 한다!!
// C언어에서 표현하는 모든 문자열의 끝에는 NULL문자가 삽입이 된다. --> 문자열의 끝을 표시하기 위해 사용 되었다!!.


// 문자열의 시작과 끝을 구분하는 문장의 코드 예시

int main()
{
	char str[50] = "Im really good at programming";
	printf("string: %s\n", str);

	str[8] = '\0'; // NULL문자를 삽입하고 있다. --> 8번쨰가 마지막이라는 뜻이다. 즉, 시작 부터 8째까지 출력하라는 의미이다. 
	printf("string: %s\n", str);

	str[6] = '\0';
	printf("string: %s\n", str);

	str[1] = '\0';
	printf("string: %s\n", str);


	return 0;

}
// 위의 예제의 경우 문자열의 중간에 NULL문자를 삽입하여 문자열의 끝을 변경하고 있다. 그리고 이렇게 '문자열의 끝'이 변경 되었을 때, 변경된 끝을 기준으로 문자열이 출력되고 있음을 보이고 있다. 