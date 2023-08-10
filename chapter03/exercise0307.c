//编写一段程序，计算出输入的四个整数中的最大值并显示。（使用if语句）

#include<stdio.h>

int main(void)
{
	int a, b, c, d, max1,max2;

	puts("请输入四个整数");
	printf("整数1："); scanf("%d", &a);
	printf("整数2："); scanf("%d", &b);
	printf("整数3："); scanf("%d", &c);
	printf("整数4："); scanf("%d", &d);

	max1 = (a> b) ? a : b;
	max2 = (c > d) ? c : d;
    if (max1 > max2)
        printf("%d", max1);
    else
        printf("%d", max2);
        
	return 0;
}
