/*#include<stdio.h>
int main()
{
	//printf("%c", '\'');    '
	//printf("%s", "\"");    "
	printf("D:\\vs\\code\\101\\Project5\\test.c");
	return 0;
}*/


/*#include<stdio.h>        ��������

int Add(int x, int y) {
	int z = x + y;
	return z;
}
int main() {
	int num1 = 10;
	int num2 = 20;
	int a = 100;
	int b = 200;
	int sum1 = 0;
	int sum2 = 0;
	sum1 = Add(num1, num2);
	sum2 = Add(a, b);
	printf("%d\n", sum1);
	printf("%d\n", sum2);
	return 0;
}*/

/*#include<stdio.h>
int Add(int x, int y) {
	int z = x + y;
	return z;
}

int main() {
	int num1 = 20;
	int num2 = 20;
	int num3 = 30;
	int num4 = 30;
	int sum1 = 0;
	int sum2 = 0;
	sum1 = Add(num1, num2);
	sum2 = Add(num3, num4);
	printf("%d\n", sum1);
	printf("%d\n", sum2);
	return 0;
	
}*/


//��������ͬ����Ԫ�صļ���
//#include<stdio.h>
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	float arr2[10] = { 9,8,7 };
//	printf("%d\n", arr1[4]);   5
//	return 0;
//}


/*#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };  //�����ʹ����ͨ���±���ʹ�õ�
	int i = 0;
	while (i < 10) {
		printf("%d ", arr[i]);
		i++;
	}
	return 0;
}*/


/*#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	while (i < 10) {
		printf("%d ", arr[i]);
		i++;
	}
	return 0;
}*/


/*#include<stdio.h>
int Add(int x, int y){
	int z = x + y;
	return z;
}
int main() {
	int num1 = 10;
	int num2 = 20;
	int sum = 0;
	sum = Add(num1, num2);
	printf("%d\n", sum);
	return 0;
}*/


/*#include<stdio.h>
int Max(int x, int y) {
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}


int main()
{
	int num1 = 10;
	int num2 = 20;  
	int max = 0;    //max����������ֵ
	max = Max(num1, num2);
	printf("%d", max);
	return 0;
}*/

/*#include<stdio.h>
int Max(int x, int y) {
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}
int main() {
	int num1 = 0;
	int num2 = 0;
	int max = 0;
	scanf_s("%d\n", &num1);
	scanf_s("%d\n", &num2);
	max = Max(num1, num2);
	printf("%d\n", max);
	return 0;
}*/

/*#include<stdio.h>
int main()
{
	extern int g_val;
	printf("g_val=%d", g_val);
	return 0;
}*/

/*#include <stdio.h>
int main()
{
	int a = 55, b = 6677;
	float m = 3.1415926, n = 7.89;
	printf("%-4d%4d\n", a, b);
	printf("%.2f,%6.2f\n", m, n);
	return 0;
}*/


/*#include<stdio.h>
int main()
{
	int a = 10;
	int* p = &a;
	printf("%p\n", &a);
	printf("%p\n", p);
	return 0;
}*/

/*#include<stdio.h>
int main()
{
	int a = 20;
	int* p = &a;
	*p = 20;
	printf("a=%d\n", a);
	return 0;
}*/





/*#include<stdio.h>
int main()
{
	char ch = 'a';
	char* az = &ch;
	*az = 'b';
	printf("%c", ch);
	return 0;
}*/



/*#include<stdio.h>
int main()
{
	char c1 = 'a';
	char* ac = &c1;
	*ac = 'b';
	printf("%c", c1);
	return 0;

}*/





/*#include<stdio.h>
int main()
{
	int a = 20;
	int* p = &a;
	printf("%d\n", sizeof(p));
	return 0;
}*/

//
//#include<stdio.h>
//int main()
//{
//	char c1 = 'a';
//	char* ch = &c1;
//	*ch = 'b';
//	printf("%d\n", sizeof(ch));
//	return 0;
//}


/*#include<stdio.h>
int main()
{
	int a = 10;

	printf("%p\n", &a);
	int* pc = &a;
	printf("%p\n",pc);
	return 0;
}*/

//22.10.9ѭ��
/*#include<stdio.h>
int main()
{
	int day = 0;
	scanf_s("%d", &day);
	switch(day)
	{
		case 1:
			printf("����һ");
			break;
		case 2:
			printf("���ڶ�");
			break;
		case 3:
			printf("������");
			break;
		case 4:
			printf("������");
			break;
		case 5:
			printf("������");
			break;
		case 6:
			printf("������");
			break;
		case 7:
			printf("������");
			break;
		default:
			printf("�������");
			break;
	}
	return 0;
}*/

/*#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		printf("%d ", i);
		i++;
	}
	return 0;
}*/


/*#include<stdio.h>  //�������
int main()
{
	int i = 1;
	while (i <= 100)
	{
		printf("%d ", i);
		i += 2;
	}
	return 0;
}*/


/*#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i < 5) {
			break;
		}
		printf("%d ", i);//������֮��ʲô�����������break����������ѭ�������break��������ֹѭ��
		i++;
	}
	return 0;
}*/

/*#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5) {
			break;
		}
		printf("%d ", i);
		i++;
	}
	return 0;
}*/


/*#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			continue;    //������continue��whileѭ���е�����
		printf("%d ", i);//������ѭ����continue����ֹ��ѭ���к�ߵĴ��룬Ȼ���������ж��Ƿ�����µ�ѭ��
		i++;//Ҳ���Ǳ���ѭ����continue����Ĵ��벻��ִ�У�����ֱ����ת��while�����жϲ��֣�������һ��ѭ��������ж�
	}
	return 0;
}*/

//#include<stdio.h>
//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	printf("%c\n", ch);
//	return 0;
//}

//#include<stdio.h>  //  ctrl+z����ֹ����
//int main()
//{
//	int ch = 0;
//	while ((ch=getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a,b, t;
//	printf("����������������");
//	scanf_s("%d,%d", &a, &b);
//	if (a > b)
//	{
//		t = a; a = b; b = t;
//	}//���� a��b
//	printf("��С��������Ϊ%d,%d\n", a,b);
//}




//22.10.9 ѭ��
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("���������룺");
//	scanf_s("%s", &password);
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�");
//	}
//	else
//	{
//		printf("����ȷ��");
//	}
//	return 0;
//}


//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", &password);
//	//�������룬�������password������
//	//��������ʣ��'\n'
//	//��ȡһ��'\n'
//	printf("123\n");
//	int a=getchar();
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�");
//	}
//	else
//	{
//		printf("����ȷ��");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("����������:>");
//	fgets(password, 20, stdin);    //δѧ
//	//�������룬�������password������
//	//��������ʣ�¡�\n'
//	//��ȡһ��'\n'printf("123");
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y') {
//		printf("ȷ�ϳɹ�");
//	}
//	else {
//		printf("����ȷ��");
//	}
//	return 0;
//}

//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("����������:");
//	scanf("%s", password);
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�");
//	}
//	else
//	{
//		printf("ȷ��ʧ��");
//	}
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	switch (month)
//	{
//	case 1:
//	case 2:
//	case 3:printf("����"); break;
//	case 4:
//	case 5:
//	case 6:printf("�ļ�"); break;
//	case 7:
//	case 8:
//	case 9:printf("�＾"); break;
//	case 10:
//	case 11:
//	case 12:printf("����"); break;
//	default:printf("����");
//	}
//	return 0;
//}


//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float x = 0;
//	float y = 0;
//	scanf("%f", &x);
//	if (x < 2)
//	{
//		y = fabs(x);
//	}
//	else if (x <= 10)
//	{
//		y = 2 * x + 1;
//	}
//	else
//	{
//		y = x / 2;
//	}
//	printf("y=%.2f", y);
//	return 0;
//}






















