//求长方形面积

#include<stdio.h>

int main(void)
{
	int width;
	int height;

	puts("求长方形的面积");

	printf("长：");
	scanf("%d", &width);

	printf("宽：");
	scanf("%d", &height);

	printf("长方形的面积为：%d。\a", width * height);
    
	return 0;
}
