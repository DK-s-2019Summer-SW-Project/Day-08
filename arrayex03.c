// ���α׷� ����ڷκ��� ���ܾ �Է� �޴´�, �׸��� ���� �Է� ���� ���ܾ �����ϴ� ���� �߿��� ASC�ڵ� ���� ���� ū ���ڸ� ã�Ƽ� ����ϴ� �ڵ带 �ۼ�


#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{

	char voca[100];
	int len = 0, i;
	char max = 0;

	printf("insert the word: ");
	scanf("%s", voca); // �� �̷��� ������ �Ǵ��� ���! ���� ����� ���� ���� ��� Remember�� Ž��!

	while (voca[len] != '\0')
		len++;
	// �Ʒ��� �˰����� ���ذ� ���� �ʴ´�. �ذ�! --> �Ʒ��� ���� ����
	for (i = 0; i < len; i++)
	{
		if (max < voca[i])
			max = voca[i];
	}
	printf("the largest ASC code is %c\n", max);
	return 0;
}

// ���ܾ �Է� �޴� �� ������ ���� �� ������ �ڿ� �� ������ ���Ͽ� ASC�ڵ�� ��ȯ�ؼ� ���ϴ� ���� ��� �ؾ� ���� ���� �ȿ´�.


// for���� ����
// max = 0 �̴�. �Է��� ABC�� �ߴٰ� ����
// for(i = 0; i< len; i++)
// if(max<voca[i]) --> �ϴ� max�� voca[i]�� �� �Ѵ�. max�� 0�̰� voca[a]�� 65�̹Ƿ� max�� ���� vaca[a]�� ����
// max = voca[i]  --> ���� max�� voca[a]�� ���� ���� �ȴ�
// �ٽ� for�� ���ư� ������ B,C�� ���Ͽ� �񱳸� ���� �Ѵ�. ���� �� ũ�ٸ� �� ū ������ ���� �ǰ� �������� �۴ٸ� �׷��� ����!!