#include <stdio.h>
#define A 70
#define B 50
#define C 30

convert();
main() {
	float score1, score2, score3;
	float sum = 0,avg = 0;
	printf("점수 3개를 입력하세요 : ");
	scanf_s("%f", &score1);
	convert(score1);

	scanf_s("%f", &score2);
	convert(score2);

	scanf_s("%f", &score3);
	convert(score3);
	
	sum = score1 + score2 + score3;

	avg = sum / 3.0;

	printf("세 점수의 평균은 %f 입니다. ", avg);
}

convert(x)
{
	if (x >= 70) {
		x = A;
	}
	else if (30 <= x) {
		x = B;
	}
	else {
		x = C;
	}
}