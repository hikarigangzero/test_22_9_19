#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include "test.h"


//浮点型验证

//int main()
//{
//	int d;
//	do {
//		float a;
//		double b;
//		long double c;
//		printf("请输入一个小数："); scanf("%f", &a);
//		printf("请输入一个小数："); scanf("%lf", &b);
//		printf("请输入一个小数："); scanf("%lf", &c);
//		printf("%f\n %f\n %lf\n", a, b, c);
//		printf("是否继续：<是=1，否=0>"); scanf("%d", &d);
//	} while (d==1);
//	return 0;
//}

//已知面积求正方形长度
//#include<math.h>
//int main()
//{
//	double a;
//	printf("请输入其面积："); scanf("%lf", &a);
//	double sqrt(double a);
//	printf("%f", sqrt(a));
//	return 0;
//}

//求0.01+...+0.99+1.00=？

//int main()
//{
//	double i, a=0;
//	for (i = 0; i <= 1; i += 0.01)
//	{
//		a = a + i;
//		printf("和为：%f\n", a);
//	}
//	return 0;
//}

//函数式宏的练习(求最大值)

//#define cha(a,b)((a)-(b))
//#define zuidazhi(a,b) ((a>b)?a:b)
//
//int main()
//{
//	int a, b, c, d, e, f;
//	printf("请输入一个整数："); scanf("%d", &a);
//	printf("请输入一个整数："); scanf("%d", &b);
//	printf("请输入一个整数："); scanf("%d", &c);
//	printf("请输入一个整数："); scanf("%d", &d);
//	printf("请输入一个整数："); scanf("%d", &e);
//	printf("请输入一个整数："); scanf("%d", &f);
//	printf("%d\n", cha(a, b));
//	printf("%d\n", zuidazhi(zuidazhi(c, d), zuidazhi(e, f)));
//	return 0;
//}

