#include <stdio.h>
int main()
{
	char club[20];
	printf("���Ƹ��� �̸���?: ");
	scanf_s("%19s", &club,20);
	printf("���Ƹ� �̸��� %s�̴�.", &club);
	return 0;
}