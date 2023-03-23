#include <stdio.h>

int main() {
	//정수 3개 n1,n2,n3을 입력받아서
	//n1 + n2 + n3 을 출력해보고
	//n1 - n2 - n3 을 출력
	//n1 * n2 * n3 을 출력
	//n1 / n2 / n3 을 출력
	float n1, n2, n3,res1,res2,res3,res4;
	printf("숫자 3개를 입력: ");
	scanf_s("%f", &n1);
	scanf_s("%f", &n2);
	scanf_s("%f", &n3);
	res1 = n1 + n2 + n3;
	res2 = n1 - n2 - n3;
	res3 = n1 * n2 * n3;
	res4 = n1 / n2 / n3;
	printf("%.1f + %.1f + %.1f = %.1f\n", n1, n2, n3, res1);
	printf("%.1f - %.1f - %.1f = %.1f\n", n1, n2, n3, res2);
	printf("%.1f * %.1f * %.1f = %.1f\n", n1, n2, n3, res3);
	printf("%.1f / %.1f / %.1f = %.1f\n", n1, n2, n3, res4);

	

}