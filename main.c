#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
////主函数（程序的入口）
////头文件stdio.h
//#include <stdio.h>
//int main()
//{
//	printf("hello,world");
//	return 0;
//}

////第一部分 数据类型
////几种数据类型
//int main()
//{
//	//字符类型
//	char ch = 'a';
//	//整型
//	int age = 20;
//	//短整型
//	short num = 10;
//	//长整型 long
//	//长长整型 long long
//
//	//单精度浮点型
//	float weight = 55.5;
//	//双精度浮点型
//	double d = 0.0;
//
//	return 0;
//
//}
//int main()
//{
//	//printf("%d\n", 100);//打印一个整数 %d
//	//sizeof - 关键字 -操作符 -计算类型或者变量所占空间的大小
//	printf("%d\n", sizeof(char));//1 byte
//	printf("%d\n", sizeof(short));//2 bytes
//	printf("%d\n", sizeof(int));//4 bytes
//	printf("%d\n", sizeof(long));//4 bytes( C语言标准：sizeof(long)>=sizeof(int) )
//	printf("%d\n", sizeof(long long));//8 bytes
//	printf("%d\n", sizeof(float));//4 bytes
//	printf("%d\n", sizeof(double));//8 bytes
//
//	return 0;
//	//单位是字节（byte）
//	计算机中的单位
//	bit - 比特位（储存一个二进制位）
//	byte - 字节 = 8 bit
//	kb - 1024 kb
//	gb - 1024 mb
//	tb - 1024 gb
//	pb - 1024 tb
//}

////第二部分 常量和变量
//int main()
//{	
//	//创建一个变量
//	//类型+变量的名字 = 0;
//	int age = 20;
//	double weight = 60.5;
//
//	age = age + 1;
//	printf("%d\n", age);
//	return 0;
//}

////变量的分类
////局部变量和全局变量
////全局变量 - {}外部定义的
//int a = 100;
//
//int main()
//{
//	//局部变量 - {}内部定义的
//	//局部变量和全局变量名字冲突时，局部优先
//	int a = 10;
//
//	printf("%d\n", a);
//
//	return 0;
//}

//写一个代码求2个整数的和
//scaf函数是输入函数
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum = %d\n", sum);

	return 0;
	//scanf函数不安全，在整个源文件第一行加入#define _CRT_SECURE_NO_WARNINGS 1
}