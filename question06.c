//프로그램 사용자로부터 scond를 입력 받은 후에, 이를 [시,분,초]의 형태로 출력하는 프로그램을 작성
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

const int H = 60 * 60;
const int M = 60;

void SecondToHMS(int sec);

int main(void)
{
	int sec;

	printf("초(second) 입력 : ");
	scanf("%d", &sec);
	SecondToHMS(sec);

	return 0;
}

void SecondToHMS(int sec)
{
	int h, m, s;

	/*시 구하기 */
	h = sec / H;
	sec = sec%H;

	/*분 구하기 */
	m = sec / M;
	sec = sec%M;

	/*초 구하기 */
	s = sec;

	printf("[h:%d, m:%d, s:%d] \n", h, m, s);
}
