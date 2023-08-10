#include<stdio.h>

int main(void)
{
	int a, b;
	double r;

	printf("整数a和b的值：");
	scanf("%d%d", &a, &b);

	printf("a+b=%d\n", a + b);
	printf("a-b=%d\n", a - b);
	printf("a*b=%d\n", a * b);
	printf("a/b=%d\n", a / b);
	printf("a%b=%d\n", a % b);

	printf("(a+b)/2\n", (a + b) / 2);
	printf("平均值：%f\n\n", (double)(a + b) / 2);
	printf("半径r：");
	scanf("%lf", &r);

	printf("半径为%.2f\n圆的面积为%.2f\n", r, 3.14 * r * r);
    
	return 0;
}
