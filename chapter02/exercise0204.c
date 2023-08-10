//编写程序对整型常量、浮点型常量、int型变量、double型变量进行乘除等各种运算，从来验证规律。
//规律：double类型与int类型进行运算，结果会进行隐型转换，变为double型

#include <stdio.h>

int main(void)
{
	int n1 = 20;
	int n2 = 2;
	double d1 = 20.0;
	double d2 = 2.0;

	printf("整型常量乘以整型常量：%d\n", 20 * 2);
	printf("浮点型常量乘以浮点型常量：%f\n", 20.0 * 2.0);
	printf("int型常量乘以int型常量：%d\n", n1*n2);
	printf("double型常量乘以double型常量：%f\n", d1*d2);
	printf("double型常量乘以int型常量：%f\n", d1*n2);
    
	return 0;
}
