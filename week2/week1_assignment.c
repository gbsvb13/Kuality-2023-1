#include <stdio.h>
int main()
{
	char club[20];
	printf("동아리의 이름은?: ");
	scanf_s("%19s", &club,20);
	printf("동아리 이름은 %s이다.", &club);
	return 0;
}