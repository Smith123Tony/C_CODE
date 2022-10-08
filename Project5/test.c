/*#include<stdio.h>
int main()
{
	//printf("%c", '\'');    '
	//printf("%s", "\"");    "
	printf("D:\\vs\\code\\101\\Project5\\test.c");
	return 0;
}*/


/*#include<stdio.h>        初见函数

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


//数组是相同类型元素的集合
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
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };  //数组的使用是通过下标来使用的
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
	int max = 0;    //max用来存放最大值
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

//22.10.9循环
/*#include<stdio.h>
int main()
{
	int day = 0;
	scanf_s("%d", &day);
	switch(day)
	{
		case 1:
			printf("星期一");
			break;
		case 2:
			printf("星期二");
			break;
		case 3:
			printf("星期三");
			break;
		case 4:
			printf("星期四");
			break;
		case 5:
			printf("星期五");
			break;
		case 6:
			printf("星期六");
			break;
		case 7:
			printf("星期天");
			break;
		default:
			printf("输入错误");
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


/*#include<stdio.h>  //输出奇数
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
		printf("%d ", i);//运行完之后什么而不会输出，break是跳出整个循环，因此break是永久终止循环
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
			continue;    //以下是continue在while循环中的作用
		printf("%d ", i);//陷入死循环，continue是终止本循环中后边的代码，然后在重新判断是否进入新的循环
		i++;//也就是本次循环中continue后面的代码不会执行，而是直接跳转到while语句的判断部分，进入下一次循环的入口判断
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

//#include<stdio.h>  //  ctrl+z是终止程序
//int main()
//{
//	int ch = 0;
//	while ((ch=getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}











































