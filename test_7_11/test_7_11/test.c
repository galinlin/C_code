#define _CRT_SECURE_NO_WARNINGS  //在VS中，要想使用scanf 在源文件第一行放入_CRT_SECURE_NO_WARNINGS
//scanf_s这个函数是VS编译器自己提供的函数，非标准C提供的函数，建议使用scanf
#include <stdio.h>
//
//int main()
//{
//	printf("hehe\n");
//
//	return 0;
//}



//#include<stdio.h>

//int main()
//{
//	printf("%d\n", sizeof(int));
//	return 0;
//}

//变量分为
//局部变量 - {}内部定义的变量
//全局变量 - {}外部定义的变量
//当全局变量和局部变量的名字相同的情况下，局部优先
//int main()
//{
//	short age = 20;//年龄
//	int hight = 180;//身高
//	float weight = 88.5;//体重
//
//	return 0;
//}

//写一个代码，计算2个整数的和

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;//初始化 
//
//	//输入2个整数
//	scanf("%d,%d", &num1, &num2);
//	//求和
//	int sum = num1 + num2;
//	//输出
//	printf("%d", sum);
//	return 0;
//}


//变量的作用域
//变量的生命周期
 
int main()
{
	{
		int a = 100;
		printf("%d\n", a);

	}

	return 0;
}

//声明来自外部的符号
//extern int a;
//
//void test()
//{
//	printf("test--->%d\n", a);
//}
//int main()
//{
//	test();
//	{
//		printf("a=%d", a);
//	}
//
//	return 0;
//}
