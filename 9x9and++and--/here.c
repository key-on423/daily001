#include <stdio.h>
void cheng(double x, double y);
void chu(double x, double y);
void jia(double x, double y);
void jian(double x, double y);
void jojo();

int main()
{

	printf("请输入你想执行的操作：\n");
	printf("a 显示九九乘法表  b 进行乘法运算  c 进行除法运算\n");
	printf("d 进行减法运算                    e 进行加法运算\n");
	char ch;
	ch = getchar();
	while (getchar() != '\n');
	double x, y;
	
	if (ch == 'a')
		jojo();
	if (ch == 'b')
	{
		printf("请输入x y的值\n");
		scanf("%lf %lf", &x, &y);
		cheng(x,y);
	}
	if (ch == 'c')
	{
		printf("请输入x y的值\n");
		scanf("%lf %lf", &x, &y);
		chu(x, y);
	}
	if (ch == 'd')
	{
		printf("请输入x y的值\n");
		scanf("%lf %lf", &x, &y);
		jian(x, y);
	}
	if (ch == 'e')
	{
		printf("请输入x y的值\n");
		scanf("%lf %lf", &x, &y);
		jia(x, y);
	}
	    if(ch!='c'&&ch!='a'&&ch!='b'&&ch!='d'&&ch!='e')
		printf("输入错误！\n");
	printf("结束！\n");
	return 0;
}
void cheng(double x, double y)
{
	printf("%lf*%lf=%.2lf\n", x, y, x * y);
}
void chu(double x, double y)
{
	printf("%lf/%lf=%.2lf\n", x, y, x / y);
}
void jojo()
{
	int x = 0;
	int y = 0;
	for (x = 1;x <= 9;x++)
	{
		for (y = 1;y <= x;y++)
		{
			printf("%d*%d=%3d ", y, x, x * y);
		}
		printf("\n");
	}
}
void jia(double x, double y)
{
	printf("%lf+%lf=%.2lf\n", x, y, x + y);
}
void jian(double x, double y)
{
	printf("%lf-%lf=%.2lf\n", x, y, x - y);
}

