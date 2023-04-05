#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n1, n2, n3;
	char c;
	printf("input number : ");
	scanf("%d %d %d" ,&n1, &n2, &n3);
	printf("input operator : ");
	scanf("%c", &c);
	scanf("%c", &c);

	switch (c) {
	case '*':
		printf("n1 * n2 * n3 = %d\n", n1 * n2 * n3);
		break;
	case '+':
		printf("n1 + n2 + n3 = %d\n", n1 + n2 + n3);
		break;
	case '-':
		printf("n1 - n2 - n3 = %d\n", n1 - n2 - n3);
		break;
	case '/':
		printf("n1 / n2 / n3 = %d\n", n1 / n2 / n3);
		break;

	}
}
