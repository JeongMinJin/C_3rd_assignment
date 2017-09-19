#include <stdio.h>

int main(void)
{
	float i = 1, sum, past = 0.0;

	sum = i*i;
	printf("x가 %lf 일때 넓이의 차이는 %lf - %lf = %lf\n", i, sum, past, sum-past);
	past += sum;

	while(sum> 0.000001){

		i = i/2;
		sum = i*i;

		printf("x가 %lf 일때 넓이의 차이는 %lf - %lf = %lf\n", i, past+sum, past, sum);

		past += sum;
	}

	printf("계산한 넓이의 합은 %lf입니다. \n", past-sum);

	return 0;
}
//3번째 숙제
//1.33332