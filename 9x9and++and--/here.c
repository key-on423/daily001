#include <stdio.h>
void cheng(double x, double y);
void chu(double x, double y);
void jia(double x, double y);
void jian(double x, double y);
void jojo();

int main()
{

	printf("����������ִ�еĲ�����\n");
	printf("a ��ʾ�žų˷���  b ���г˷�����  c ���г�������\n");
	printf("d ���м�������                    e ���мӷ�����\n");
	char ch;
	ch = getchar();
	while (getchar() != '\n');
	double x, y;
	
	if (ch == 'a')
		jojo();
	if (ch == 'b')
	{
		printf("������x y��ֵ\n");
		scanf("%lf %lf", &x, &y);
		cheng(x,y);
	}
	if (ch == 'c')
	{
		printf("������x y��ֵ\n");
		scanf("%lf %lf", &x, &y);
		chu(x, y);
	}
	if (ch == 'd')
	{
		printf("������x y��ֵ\n");
		scanf("%lf %lf", &x, &y);
		jian(x, y);
	}
	if (ch == 'e')
	{
		printf("������x y��ֵ\n");
		scanf("%lf %lf", &x, &y);
		jia(x, y);
	}
	    if(ch!='c'&&ch!='a'&&ch!='b'&&ch!='d'&&ch!='e')
		printf("�������\n");
	printf("������\n");
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

