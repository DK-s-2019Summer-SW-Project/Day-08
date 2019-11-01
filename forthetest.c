
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	char str[50] = "Im really good at programming";
	printf("string: %s\n", str);

	str[8] = '\0';
	printf("string: %s\n", str);

	str[6] = '\0';
	printf("string: %s\n", str);

	str[1] = '\0';
	printf("string: %s\n", str);


	return 0;

}