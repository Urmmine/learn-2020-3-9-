#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
////���������������ڣ�
////ͷ�ļ�stdio.h
//#include <stdio.h>
//int main()
//{
//	printf("hello,world");
//	return 0;
//}

////��һ���� ��������
////������������
//int main()
//{
//	//�ַ�����
//	char ch = 'a';
//	//����
//	int age = 20;
//	//������
//	short num = 10;
//	//������ long
//	//�������� long long
//
//	//�����ȸ�����
//	float weight = 55.5;
//	//˫���ȸ�����
//	double d = 0.0;
//
//	return 0;
//
//}
//int main()
//{
//	//printf("%d\n", 100);//��ӡһ������ %d
//	//sizeof - �ؼ��� -������ -�������ͻ��߱�����ռ�ռ�Ĵ�С
//	printf("%d\n", sizeof(char));//1 byte
//	printf("%d\n", sizeof(short));//2 bytes
//	printf("%d\n", sizeof(int));//4 bytes
//	printf("%d\n", sizeof(long));//4 bytes( C���Ա�׼��sizeof(long)>=sizeof(int) )
//	printf("%d\n", sizeof(long long));//8 bytes
//	printf("%d\n", sizeof(float));//4 bytes
//	printf("%d\n", sizeof(double));//8 bytes
//
//	return 0;
//	//��λ���ֽڣ�byte��
//	������еĵ�λ
//	bit - ����λ������һ��������λ��
//	byte - �ֽ� = 8 bit
//	kb - 1024 kb
//	gb - 1024 mb
//	tb - 1024 gb
//	pb - 1024 tb
//}

////�ڶ����� �����ͱ���
//int main()
//{	
//	//����һ������
//	//����+���������� = 0;
//	int age = 20;
//	double weight = 60.5;
//
//	age = age + 1;
//	printf("%d\n", age);
//	return 0;
//}

////�����ķ���
////�ֲ�������ȫ�ֱ���
////ȫ�ֱ��� - {}�ⲿ�����
//int a = 100;
//
//int main()
//{
//	//�ֲ����� - {}�ڲ������
//	//�ֲ�������ȫ�ֱ������ֳ�ͻʱ���ֲ�����
//	int a = 10;
//
//	printf("%d\n", a);
//
//	return 0;
//}

//дһ��������2�������ĺ�
//scaf���������뺯��
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum = %d\n", sum);

	return 0;
	//scanf��������ȫ��������Դ�ļ���һ�м���#define _CRT_SECURE_NO_WARNINGS 1
}