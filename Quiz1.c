#include <stdio.h>

int main(void)
{
	float i = 1, sum, past = 0.0;

	sum = i*i;
	printf("x�� %lf �϶� ������ ���̴� %lf - %lf = %lf\n", i, sum, past, sum-past);
	past += sum;

	while(sum> 0.000001){

		i = i/2;
		sum = i*i;

		printf("x�� %lf �϶� ������ ���̴� %lf - %lf = %lf\n", i, past+sum, past, sum);

		past += sum;
	}

	printf("����� ������ ���� %lf�Դϴ�. \n", past-sum);

	return 0;
}
//3��° ����
//1.33332