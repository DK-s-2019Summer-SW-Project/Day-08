//�迭�� �̿��� ���ڿ� ������ ǥ��
//�� �״�� ���ڿ� �ȿ��ٰ� ���ڸ� �־� ���� ��Ű�� ��!

#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	char str[50];  // char�̶� �迭�ȿ� 50bit��ŭ�� ������ �����ϰ� �� ũ�� ��ŭ�� ���ڸ� �ְڴٴ� �ǹ��̴�. --> �׷� �������� �ܾ ������ ���� �� �κ�����? �� �κп� ���� Ȯ���� �غ���.
	int idx = 0;

	printf("insert the letter: ");
	scanf("%s", str); // ���ڿ��� �Է� �޾Ƽ� �迭 str�� ������ �Ѵ�.  ���⼭ ����!!!!! scanf_s�� ���� ���ڸ� �Է� ���� �� ���!! ���⼭�� scanf_s�� ����ϸ� ������ �߻��Ѵ�!!
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
// scanf_s �Լ��� ����ؼ� %s ���� �����ڷ� ���ڸ� �Է��� ������ �Էµ��� �ʴ� ������ ������ -2 ���� ä������
// scanf �Լ������� %s ���� �����ڸ� ��� �� �� �Է� �� ���ڿ��� ������ �޸� �ּҸ� �������� �Ǿ����� ����ڰ� ���ڿ��� �ʹ� ��� �Է��ؼ� ������ �޸��� ũ�⸦ �Ѿ�� ��� ���α׷��� ���װ� �߻��Ѵ�
// �̷� ������ �ذ��ϱ� ���� scanf_s �Լ����� %s ���� �����ڸ� ����ϸ� �Էµ� ���ڿ��� ���� �� �� ���� �޸� �ּҿ� �� �޸��� ũ����� ���� ����� �Ѵ�!!
// C���� ǥ���ϴ� ��� ���ڿ��� ������ NULL���ڰ� ������ �ȴ�. --> ���ڿ��� ���� ǥ���ϱ� ���� ��� �Ǿ���!!.


// ���ڿ��� ���۰� ���� �����ϴ� ������ �ڵ� ����

int main()
{
	char str[50] = "Im really good at programming";
	printf("string: %s\n", str);

	str[8] = '\0'; // NULL���ڸ� �����ϰ� �ִ�. --> 8������ �������̶�� ���̴�. ��, ���� ���� 8°���� ����϶�� �ǹ��̴�. 
	printf("string: %s\n", str);

	str[6] = '\0';
	printf("string: %s\n", str);

	str[1] = '\0';
	printf("string: %s\n", str);


	return 0;

}
// ���� ������ ��� ���ڿ��� �߰��� NULL���ڸ� �����Ͽ� ���ڿ��� ���� �����ϰ� �ִ�. �׸��� �̷��� '���ڿ��� ��'�� ���� �Ǿ��� ��, ����� ���� �������� ���ڿ��� ��µǰ� ������ ���̰� �ִ�. 