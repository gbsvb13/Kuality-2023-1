#include <stdio.h>

int main() {
	//���� 3�� n1,n2,n3�� �Է¹޾Ƽ�
	//n1 + n2 + n3 �� ����غ���
	//n1 - n2 - n3 �� ���
	//n1 * n2 * n3 �� ���
	//n1 / n2 / n3 �� ���
	float n1, n2, n3,res1,res2,res3,res4;
	printf("���� 3���� �Է�: ");
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