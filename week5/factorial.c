#include <stdio.h>


int factorial(int n) {
	int result = 1;
	while (n > 0) {
		result = result * n;
		n = n - 1;
	}
	return result;
}
int main() {
	int num = 0;
	printf("input number:\n");
	scanf_s("%d", num);
	printf("%d",factorial(num));
}