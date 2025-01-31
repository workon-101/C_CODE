#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
//	return x+y;
}

int main()
{
	int a = 10;
	int b = 20;
	int ret = 0;
	ret = Add(a, b);
	return 0;
}

//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//void print1(Stu tmp)
//{
//	printf("name: %s\n", tmp.name);
//	printf("age: %d\n", tmp.age);
//	printf("tele: %s\n", tmp.tele);
//	printf("sex: %s\n", tmp.sex);
//}
//
//void print2(Stu* tmp)
//{
//	printf("name: %s\n", tmp->name);
//	printf("age: %d\n", tmp->age);
//	printf("tele: %s\n", tmp->tele);
//	printf("sex: %s\n", tmp->sex);
//}
//
//int main()
//{
//	Stu s = {"bod", 30, "123456789", "man"};
//	print1(s);
//	print2(&s);
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = {"hehe", {100, 'w', "hello world", 3.14}, arr};
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}

//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//int main()
//{
//	Stu s1 = {"bod", 20, "12345678910", "man"};
//	Stu s2 = {"hehe", 18, "123456789", "haha"};
//	
//	return 0;
//}

//	scanf("%d%d", &n, &k);

//int DigitSum(unsigned int a)
//{
//	if(a >= 1)
//		return count = (a%10 + DigitSum(a/10));
//}
//
//int main()
//{
//	unsigned int a = 0;
//	scanf("%d", &a);
//	int ret = DigitSum(a);
//	printf("%d\n", ret);
//	return 0;
//}

//void f(char arr[], int len)
//{
//	char tmp = 0;
//	int left = 0;
//	int right = len-1;
//	while(left<right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] =  tmp;
//		left++;
//		right--;
//	}
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char arr[])
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if(my_strlen(arr+1) >= 2)
//		reverse_string(arr+1);
//	arr[len - 1] = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//void f(int n)
//{
//	int i = 0;
//	int j = 0;
//	for(i=1; i<=n; i++)
//	{
//		for(j=1; j<=i; j++)
//		{
//			printf("%d*%d = %-3d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	f(n);
//	return 0;
//}

//void print(int* p, int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", *p+i);
//	}
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

//void print(int m)
//{
//	int i = 0;
//	printf("ji\n");
//	for(i = 30; i>=0; i-= 2)
//	{
//		printf("%d", (m>>i) &1);
//	}
//	printf("\nwou\n");
//	for(i=31; i>=0; i-= 2)
//	{
//		printf("%d", (m>>i) &1);
//	}
//}
//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}

//int f(int a, int b)
//{
//	int count = 0;
//	int z = a^b;
//	while(z)
//	{
//		z = z&(z-1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 1999;
//	int b = 2299;
//	int ret = f(a, b);
//	printf("%d\n", ret);
//	return 0;
//}

//int f(unsigned int a)
//{
//	int count = 0;
//	if(a != 0)
//	{
//		count += (1+f(a>>1));
//	}
//	return count;
//}

//int f(int n)
//{
//	int count = 0;
//	if(n != 0)
//	{
//		if(n&1 == 1)
//		{
//			count += (1+f(n>>1));
//		}
//		else
//		{
//			count += (f(n>>1));
//		}
//	}
//	return count;
//}

//int f(unsigned int n)
//{
//	int count = 0;
//	while(n)
//	{
//		if(n%2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}

//int f(int a)
//{
//	int i = 0;
//	int count = 0;
//	for(i=0; i<32; i++)
//	{
//		if((a>>i)&1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//int f(int n)
//{
//	int count = 0;
//	while(n)
//	{
//		n = n&(n-1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = f(a);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {6,7,8,9,10};
//	int* tmp = NULL;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		tmp = &arr1[i];
//		&arr1[i] = &arr2[i];
//		&arr2[i] = tmp;
//	}
//	for(i=0; i<sz; i++)
//	{
//		printf("arr1[%d] = %d ", i, arr1[i]);
//		printf("arr2[%d] = %d\n", i, arr2[i]);
//	}
//	return 0;
//}

//void init(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz ;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void re(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	int i = 0;
//	while(left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[11] = {1,2,3,4,5,6,7,8,9,10,11};
//	int sz = sizeof(arr)/sizeof(arr[0]);
////	init(arr, sz);
//	re(arr, sz);
//	print(arr, sz);
//	return 0;
//}

//int mian()
//{
//	{
//		int a = 10;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* p[] = {&a,&b,&c};
//	int i = 0;
//	for(i=0; i<3; i++)
//	{
//		printf("%d\n", *p[i]);
//	}
//	printf("%p\n", &a);
//	printf("%p\n", &b);
//	printf("%p\n", &c);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa =  &pa;
//	int*** pppa = &ppa;
//	***pppa = 20;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int arr[10] = {0};
//	int* p = arr;
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		*(p+i) = i;
//	}
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
////	printf("%p\n", arr);
////	printf("%p\n", &arr[0]);
////	printf("%p\n", &arr+1);
////	printf("%p\n", &arr+2);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while(*end != '\0')
//	{
//		end++;
//	}
//	return (end - start);
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	char ch[5] = {0};
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
//	printf("%d\n", &arr[0] - &arr[9]);
//	printf("%d\n", &arr[9] - &arr1[9]);
//	return 0;
//}

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int* p = &arr[9];
////	for(i=0; i<sz; i++)
////	{
////		printf("%d ", *p);
////		++p;
////	}
//	for(i = 0; i<10; i++)
//	{
//		printf("%d ", *p);
//		p--;
//	}
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("%d\n", ((rand()%9000))+1000);
//	return 0;
//}

//int main()
//{
//	int a;
//	a = 10;
//	int* p;
//	*p = 10;
//	printf("%d,%d\n", a, *p);
//	return 0;
//}

//int main()
//{
//	int arr[10] = {0};
////	int* p = arr;
//	char* p = arr;
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		*(p+i) = 1;
//		printf("%d\n", arr[i]);
//	}
//	
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	return 0;
//}

//int main()
//{
////	printf("%d\n", sizeof(char*));
////	printf("%d\n", sizeof(int*));
////	printf("%d\n", sizeof(short*));
////	printf("%d\n", sizeof(double*));
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;
//	pintf("%d\n", a);
//	char* pc = &a;
//	*pc = 0;
//	printf("%d\n", a);
////	printf("%p\n", pa);
////	printf("%p\n", pc);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%d\n", *p);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int a = (++i) + (++i) + (++i);
//	printf("a = %d\n", a);
//	printf("%d\n", i);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = b + a * 3;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	char c = 0;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(!c));
//	return 0;
//}

//int main()
//{
//	char a =3;
//	char b = 127;
//	unsigned char c = a+b;
//	printf("%d\n", c);
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	struct Stu s1 = {"max", 20, "235600"};
//	struct Stu* ps = &s1;
//	printf("%d", ps->age);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//	printf("%s\n", s1.name);
//	return 0;
//}

//int get_max(int x, int y)
//{
//	return (x>y?x:y);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//int main(
//{
//	int a[10] = {0};
//	a[4] = 10;
//	1
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a>b, a=b+10, a, b=a+1);
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 0, c = 3, d = -1;
//	i = b++ || ++d || a++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d", a, b, c, d);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = a||b;
//	printf("%d\n", c);
//	return 0;
//}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//
//int main()
//{
//	int arr[10] = {0};
//	char ch[10] = {0};
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	
//	return 0;
//}

//int main()
//{
//	int a = (int)3.74;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
////	printf("%d\n", ++a);
//	printf("%d\n", a++);
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 11;
//	a |= 1<<2;
//	printf("%d\n", a);
//	int b = ~(1<<2);
//	a &= b;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s);
////	int a = 10;
////	printf("%d\n", sizeof(a));
////	printf("%d\n", sizeof(char));
////	printf("%d\n", sizeof(int [10]));
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	char c = 'a';
//	char* p = &c;
//	int arr[10] = {0};
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(c));//1
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(p));//8
//	printf("%d\n", sizeof(char*));//8
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(int [10]));//40
//	printf("%d\n", sizeof(int* [10]));
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = -5;
//	a = -a;
//	a = +a;
//	printf("%d\n", a);
//}

//int main()
//{
//	int a = 10;
////	printf("%d\n", !a);
//	if(!a)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for(i=0; i<32; i++)
//	{
//		if(1 == ((n>>i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//
//int main()
//{
//	int count = 0;
//	int num = 0;
//	scanf("%d", &num);
//	while(num)
//	{
//		if(num%2==1)
//		{
//			count++;
//		}
//		num /= 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int a = 3;//00000000000000000000000000000011
//	int b = 5;//00000000000000000000000000000101
//	int a = a^b;//00000000000000000000000000000110
//	int b = a^b;//00000000000000000000000000000011
//	int a = a^b;//00000000000000000000000000000101
//	printf("a = %d, b = %d\n", )
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = -3;//11111111111111111111111111111101
//	int b = -5;//11111111111111111111111111111011
//	int c = a^b;//00000000000000000000000000000110
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = -2;
//	//10000000000000000000000000000010
//	//11111111111111111111111111111101
//	//11111111111111111111111111111110
//	//
//	//11111111111111111111111111111100
//	//11111111111111111111111111111011
//	//10000000000000000000000000000100
//	int b = a << 1;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	double a = 5 / 2.0;
//	printf("%lf\n", a);
//	return 0;
//}

//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9};
////	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("%p\n",&arr[0]);
//	printf("%p\n",&arr[0]+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	
//	return 0;
//}

//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9};
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);
//	return 0;
//}

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i < sz-1; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for(j=0; j < sz-1-i; j++)
//		{
//			if(arr[j]>arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//				flag = 0;
//			}
//		}
//		if(flag == 1)
//			break;
//		
//	}
//}
//
//int main()
//{
//	int arr[] = {9,7,5,6,8,4,3,2,1,0};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for(i=0; i<sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][3] = {{1,2,3}, {4,5,}};
//	int i = 0;
//	for(i=0; i<3; i++)
//	{
//		int j = 0;
//		for(j=0; j<3; j++)
//			printf("arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//	}
//	
//	return 0;
//}

//int main()
//{
//	int arr[3][16] = {1,2,3,4,5};
//	return 0;
//}

//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
////	printf("%c\n", arr[3]);
//	int i = 0;
//	for(i=0; i<6; i++)
//	{
//		printf("%c\n", arr[i]);
//	}
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a', 'b', 'c'};
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	char arr[2] = {'a', 'b'};
//	int arr2[10];
//	printf("%s\n", arr);
//	
//	return 0;
//}

//void test(int n)
//{
//	if(n<10000)
//	{
//		test(n+1);
//		printf("hehe\n");
//	}
//}
//
//int main()
//{
//	test(1);
//	return 0;
//}

//int Fib(int x)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while(x>2)
//	{
//		c = a+b;
//		a = b;
//		b = c;
//		x--;
//	}
//	return c;
//	
//}
//
//int main()
//{
//	int n = 10000;
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//int Falc(int x)
//{
//	if(x<=2)
//		return 1;
//	else
//		return Falc(x-2)+Falc(x-1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Falc(n);
//	printf("%d\n", ret);
//	return 0;
//}

//int Facl(int x)
//{
//	int i = 0;
//	int ans = 1;
//	for(i=1; i<=x; i++)
//	{
//		ans *= i;
//	}
//	return ans;
//}

//int Facl(int x)
//{
//	if(x>1)
//	{
//		return x*Facl(x-1);
//	}
//	else
//		return 1;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Facl(n);
//	printf("%d\n", ret);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	int com = 0;
//	while(*str != '\0')
//	{
//		com++;
//		str++;
//	}
//	return com;
//}

//int my_strlen(char* str)
//{
//	if(*str != '\0')
//		return 1+my_strlen(str+1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int my_strlen(char* str, int com)
//{
//	 if((*str) != '\0')
//	 {
//	 	com++;
//	 	my_strlen(str++, com);
//	 }
//	 return com;
//	 	
//}
//
//int main()
//{
//	int s = 0;
//	char arr[] = "bit";
////	int len = strlen(arr);
////	printf("%d\n", len);
//	int len = my_strlen(arr, s);
//	printf("len = %d\n", len);
//	return 0;
//}

//	scanf("%d", &num);
//void print(int n)
//{
//	if(n>9)
//	{
//		print(n/10);
//	}
//	printf("%d ", n%10);
//}
//
//int main()
//{
//	unsigned int num = 1234;
//
//	print(num);
//	return 0;
//}

//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

//extern add(int, int);
//#include "add.h"

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = add(a, b);
//	printf("%d\n", sum);
//	return 0 ;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//}

//int main()
//{
//	int len = 0;
//	len = strlen("abc");
//	printf("%d\n", len);
//	printf("%d\n", strlen("abc"));
//}

//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for(i=0; i<3; i++)
//		new_line();
//}
//int main()
//{
//	three_line();
//	return 0;
//}

//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num = %d\n", num);
//	Add(&num);
//	printf("num = %d\n", num);
//	Add(&num);
//	printf("num = %d\n", num);
//	return 0;
//}

//int binery_search(int x, int y, int arr[], int* z)
//{
//	++*z;
//	int left = 0;
//	int right = y - 1;
//	int mid = 0;
//	while(left<=right)
//	{
//		mid = (left+right) / 2;
//		if(arr[mid]<x)
//		{
//			left=mid+1;
//		}
//		else if(arr[mid]>x)
//		{
//			right=mid-1;
//		}
//		else
//			return mid;
//	}
//	return -1;
//}
//
//int main()
//{
//	int num = 0;
//	int i = 0;
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = (sizeof(arr)/sizeof(arr[0]));
//	int k = 7;
//	int ret = binery_search(k, sz, arr, &num);
//	for(i=0; i<3; i++)
//		ret = binery_search(k, sz, arr, &num);
//	if(ret==-1)
//		printf("not finded\n");
//	else
//		printf("sy is %d\n", ret);
//	printf("%d\n", num);
//	return 0;
//}

//int is_lun(int x)
//{
//	if((x%4==0 && x%100!=0) || x%400==0)
//		return 1;
//	return 0;
//}
//
//int main()
//{
//	int year = 0;
//	int com =0 ;
//	for(year=1000; year<=2000; year++)
//	if(is_lun(year)==1)
//	{
//		com++;
//		printf("%d ", year);
//	}
//	printf("\n%d", com);
//	return 0;
////	else
////		printf("not lun\n");
//}

//int is_prime(int x)
//{
//	int j = 0;
//	for(j=2; j<=sqrt(x); j++)
//	{
//		if(x%j==0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int com = 0;
//	for(i=100; i<=200; i++)
//	{
//		if(is_prime(i)==1)
//		{
//			printf("%d ", i);
//			com++;
//		}
//	}
//	printf("\n%d",com);
//	return 0;
//}

//int Deter(int x)
//{
//	int i = 0;
//	for(i=2; i<x; i++)
//	{
//		if(x%i==0)
//			break;
//	}
//	if(i==x)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int ans = 0;
//	scanf("%d", &a);
//	ans = Deter(a);
//	if(1 == ans)
//		printf("%d is prime number\n", a);
//	else
//		printf("%d is not prime number\n", a);
//	
//	
//}

//void Sw(int* x, int* y)
//{
//	int t = *x;
//	*x = *y;
//	*y = t;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("a=%d b=%d\n", a, b);
//	Sw(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d", a);
//	return 0;
//}

//void Sw(int x, int y)
//{
//	int z = x;
//	x = y;
//	y = z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("a = %d , b = %d\n", a, b);
//	Sw(a, b);
//	printf("a = %d , b = %d\n", a, b);
//	return 0;
//}

//int Aaa(int x, int y)
//{
//	if(x>y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int ans = Aaa(a, b);
//	printf("%d\n", ans);
//	return 0;
//}

//int main()
//{
//	//memset-memory set
//	
//	char arr[] = "hello world";
//	memset(arr, 65, 5);
//	printf("%s", arr);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[3] = "***";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr2);
//	printf("%d\n", sizeof(arr2));
//	return 0;
//}

//int main()
//{
//	//strcpy-string copy
//	//strlen-string length
//	char arr1[] = "bit";
//	char arr2[] = "***********";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	printf("%d\n", arr2[3]);
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x+y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 600");
//	while(1)
//	{
//		printf("will shutdown at one minute, if scan fff don\'t shutdown\n");
//		scanf("%s", input);
//		if(0 == strcmp("fff", input))
//			system("shutdown -a");
//			break;
//	}
//	return 0;
//}

//int main()
//{
//	printf("hello world\n");
//	goto again;
//	printf("hello\n");
//again:
//		printf("hehe\n");
//	return 0;
//}

//void menu()
//{
//	printf("**************************\n");
//	printf("****  1.play  0.exit  ****\n");
//	printf("**************************\n");
//}
//
//void game()
//{
//	int number = rand()%100+1;
//	int g_number = -1;
//	int left = 0;
//	int right = 101;
////	printf("%d\n", number);
//	while(1)
//	{
//		printf("guess number(%d<number<%d)>:\n", left, right);
//		scanf("%d", &g_number);
//		if(g_number>number)
//		{
//			printf("%d>number\n", g_number);
//			right = g_number;
//		}
//		else if(g_number<number)
//		{
//			printf("%d<number\n", g_number);
//			left = g_number;
//		}
//		else
//		{
//			printf("right number=%d\n", g_number);
//			break;
//		}
//	}	
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("plese choice>:");
//		scanf("%d", &input);
//		switch(input)
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("exit game\n");
//				break;
//			default:
//				printf("wrong\n");
//				break;
//		}
//	}
//	while(input);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for(i=1; i<=9; i++)
//	{
//		int j = 0;
//		for(j=1; j<=i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[] = {-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
//	int max = arr[0];
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=1; i<sz; i++)
//	{
//		if(max<arr[i])
//			max = arr[i];
//			
//	}
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for(i=1; i<=100; i++)
//	{
//		sum += flag*1.0/i;
//		flag = -flag;
//	}
//	printf("%f\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	for(i=1; i<=100; i++)
//	{
//		if(i%2==1)
//			sum += 1.0/i;
//		if(i%2==0)
//			sum -= 1.0/i;
//	}
//	printf("%f\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int com = 0;
//	for(i=1; i<=100; i++)
//	{
//		if(9 == i%10)
//			com++;
//		if(9 == i/10)
//			com++;
//	}
//	printf("%d\n", com);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	for(a=1, b=1; a<=100; a++)
//	{
//		if(b>=20)
//			break;
//		if(b%3==1)
//		{
//			b += 3;
//			continue;
//		}
//	}
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int com = 0;
//	for(i=101; i<=199; i+=2)
//	{
//		int j = 0;
//		for(j=2; j<=sqrt(i); j++)
//		{
//			if(i%j==0)
//				break;
//		}
//		if(j>sqrt(i))
//		{
//			printf("%d ", i);
//			com++;
//		}
//	}
//	printf("\n%d", com);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int com = 0;
//	for(n=100; n<=200; n++)
//	{
//		if(n%13==0)
//			continue;
//		else if(n%11==0)
//			continue;
//		else if(n%7==0)
//			continue;
//		else if(n%5==0)
//			continue;
//		else if(n%3==0)
//			continue;
//		else if(n%2==0)
//			continue;
//		else
//		{
//			printf("%d ", n);
//			com++;
//		}
//	}
//	printf("\n%d", com);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int com = 0;
//	for(i=1000; i<=2000; i++)
//	{
//		if((i%4 == 0)&&(i%100 != 0)||(i%400 == 0))
//		{
//			printf("%d ", i);
//			com++;
//		}
//	}
//	printf("com = %d\n", com);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int r = 0;
//	scanf("%d%d", &a, &b);
//	while(r = a%b)
//	{
//		a = b;
//		b = r;
//	}
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for(i=1; i<=100; i++)
//	{
//		if(i%3==0)
//			printf("%d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if(a<b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if(a<c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if(b<c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if(a>b&&a>c)
//	{
//		if(b>c)
//			printf("%d\n%d\n%d\n", a, b, c);
//		else
//			printf("%d\n%d\n%d\n", a, c, b);
//	}
//	else if(a>b&&a<c)
//		printf("%d\n%d\n%d\n", c, a, b);
//	else if(a>c&&a<b)
//		printf("%d\n%d\n%d\n", b, a, c);
//	else
//	{
//		if(b>c)
//			printf("%d\n%d\n%d\n", b, c, a);
//		else
//			printf("%d\n%d\n%d\n", c, b, a);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int* p = &a;
//	printf("%d\n", sizeof(p));
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char code[20] = {0};
//	for(i=0; i<3; i++)
//	{
//		printf("pleses input code:>");
//		scanf("%s", code);
//		if(strcmp(code, "123456") == 0)
//		{
//			printf("right\n");
//			break;
//		}
//		system("cls");
//		if(i<2)
//			printf("input again\n");
//	}
//	if(3==i)
//		printf("wrong!!!\n");
//	
//	return 0;
//}

//int main()
//{
//	char arr1[] = {"hello,world!"};
//	char arr2[] = {"            "};
//	int l = strlen(arr1);
//	int left = 0;
//	int right = l - 1;
//	while(left<=right)
//	{
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 6;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while(left<=right)
//	{
//		int mid = (left+right)/2;
//		if(arr[mid]>k)
//			right = mid - 1;
//		else if(arr[mid]<k)
//			left = mid + 1;
//		else
//		{
//			printf("find, sy is %d\n", mid);
//			break;
//		}
//	}
//	if(left>right)
//		printf("not finded\n");
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for(n=1; n<=10; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for(i=1; i<=n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	for(i=0; i<3; i++)
//	{
//		printf("pleses input code:>");
//		scanf("%s", password);
//		if(strcmp(password, "123456") == 0)
//		{
//			printf("right\n");
//			break;
//		}
////		int n = strcmp("123456", password);
////		printf("%d\n", n);
//		system("cls");
//		if(i<2)
//			printf("input again\n");
//	}
//	if(3==i)
//		printf("don\'t input\n");
//	return 0;
//}

//int main()
//{
//	char arr1[] = "hello,world!";
//	char arr2[] = "            ";
//	int sz = sizeof(arr1)/sizeof(arr1[0]);
//	int left = 0;
//	int right = sz-2;
//	while(left<=right)
//	{
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int left = 0;
//	int right = 0;
//	int k = 99;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	right = sz-1;
//	while(right>=left)
//	{
//		int mid = (right + left)/2;
//		if(arr[mid]>k)
//		{
//			right = mid-1;
//		}
//		else if(arr[mid]<k)
//		{
//			left = mid+1;
//		}
//		else
//		{
//			printf("finded, sy is %d\n", mid);
//			break;
//		}
//	}
//	if(right<left)
//		printf("not find\n");
//	return 0;
//}

//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 11;
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=0; i<sz; i++)
//	{
//		if(k == arr[i])
//		{
//			printf("finded, sy is %d\n", i);
//			break;
//		}
//	}
//	if(i==sz)
//		printf("not find\n");
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for(n=1; n<=10; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for(n=1; n<=10; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int m = 0;
//	for(i=1; i<=10; i++)
//	{
//		
//		int n = 1;
//		for(j=1; j<=i; j++)
//		{
//			n = n * j;
//		}
//		m += n;
//	}
//	printf("%d\n", m);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int m = 1;
//	scanf("%d", &n);
//	for(i=1; i<=n; i++)
//	{
//		if(0==n)
//		{
//			m=1;
//			break;
//		}
//		m = m * i;
//	}
//	printf("%d\n", m);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if(i == 5)
//			continue;
//		printf("%d\n", i);
//		i++;
//	}
//	while(i<=10);
//	return 0;
//}
//int main()
//{
//	int x, y;
//	for(x=0, y=0; x<2&&y<5; x++, y++)
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for(; i<10; i++)
//	{
//		for(; j<10; j++)
//		{
//			printf("hehe%d*%d\n", j, i);
//		}
//	}
//	//10*10hehe
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for(;;)
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for(i=1; i<10; i++)
//	{
//		if(i = 5)
//		{
//			printf("lala\n");
//		}
//	printf("haha\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 1;
//	for(i=1; i<=10; ++i)
//	{
//		if(i==5)
//			continue;
//		printf("%d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while(i<10)
//	{
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while((ch = getchar())!=EOF)
//	{
//		if(ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
////		printf("\n");
//	}
//	return 0;
//}

////int main(){
//////	int ch = 0;
//////	while((ch=getchar()) != EOF)
//////	{
//////		putchar(ch);
////////		printf("%d", ch);
//////	}
//////	printf("%c\n", 97);
//////	printf("%c\n", 10);
//////	printf("%c\n", 65);
////	int ret = 0;
////	int ch = 0;
////	char password[20] = {0};
////	printf("input coke:>");
////	scanf("%s", password);
////	while((ch=getchar())!='\n')
////	{
////		;
////	}
////	printf("define(Y/N):>");
////	ret = getchar();
////	if(ret == 'Y'){
////		printf("right\n");
////	}
////	else
////		printf("wrong\n");
//////	printf("%chaha\n", getchar());
////	return 0;
////}
//
////int main(){
////	int i = 0;
////	while(0==i){
////		i++;
////		printf("%d\n", i);
////	}
////	printf("%d\n", i);
////	return 0;
////}
//
////int main(){
////	
////	int ch = 0;
////	while((ch = getchar())!=EOF)
////	{
////	 	putchar(ch);
////	}
////	
////	return 0;
////}
//
////int main(){
////	int ch = getchar();
////	putchar(ch);
////	printf("%d\n", ch);
////	
////	return 0;
////}
//
////int main(){
////	int i = 0;
////	while(i<10){
////		
////		i++;
////		printf("%d\n", i);
////	}
////	
////	return 0;
////}
//
////int main(){
////	
////	int day = 0;
////	int n = 1;
////	scanf("%d", &day);
////	switch(day)
////	{
////		case 1:
////			if(n == 1)
////				printf("haha\n");
////		case 2:
////		case 3:
////		case 4:
////		case 5:
////			printf("working\n");
////			break;
////		case 6:
////		case 7:
////			printf("relax\n");
////			break;
////		default:
////			printf("wrong\n");
////			break;
////	}
////	
////	return 0;
////}
//
////int main(){
////	int day = 0;
////	scanf("%d", &day);
//////	if(1 == day)
//////		printf("oneday");
//////	else if(2 == day)
//////		printf("twoday");
//////	else if(3 == day)
//////		printf("threeday");
//
////	
////	
////	
////	return 0;
////}
//
////int main(){
////	int a = 0;
////	scanf("%d", &a);
////	if(a % 2 == 1){
////		printf("ji\n");
////	}
////	else
////		printf("ou\n");
////	return 0;
////}
//
////int main(){
////	int a = 0;
////	while(a<100)
////	{
////		a++;
////		if(a%2 == 1){
////			printf("%d\n", a);
////		}
////		
////	}
////	return 0;
////}
//
////int main()
////{
////	int num = 1;
////	if(5 == num){
////		printf("%d\n", num);
////	}
////	return 0;
////}
//
////int main(){
////
////int a = 0;
////int b = 2;
////if(a == 1)
////{
////if(b == 2)
////printf("hh\n");
////}
////else
////printf("aa\n");
////
////return 0;
////} 
//
////int main(){
////	
////	int age = 10;
////	if(age<18)
////	{
////	
////		printf("<18\n");
////		printf("no sex\n");
////	}
////	else
////	{
////		if(18<=age && age<28)
////			printf("18<=age<28\n");
////		else if(28<=age && age<50)
////			printf("28<=age<50\n");
////		else if(50<=age && age<90)
////			printf("50<=age<90\n");
////		else
////			printf("age>=90\n");
////	}
////	
////	else if(18<=age && age<28)
////		printf("18<=age<28\n");
////	else if(28<=age && age<50)
////		printf("28<=age<50\n");
////	else if(50<=age && age<90)
////		printf("50<=age<90\n");
////	else
////		printf("age>=90\n");
////	if(age<18)
////		printf("<18");
////	else
////		printf(">=18");	
//	
//// 
////int main(){
////	
////	int a = 0;
////	;
////	return 0;
////}
//
////struct Book
////{
////	char name[20];
////	short price;
////};
////int main()
////{
////	
////	struct Book b1 = {"C programing", 25
////	};
////	struct Book* pb = &b1;
////	printf("%s\n", pb->name);
////	printf("%d\n", pb->price);
////	pb->price = 21;
////	printf("%d\n", (*pb).price);
////	strcpy(b1.name, "C++");
////	printf("%s\n", b1.name);
////	return 0;
////}
//
////struct Book
////{
////	char name[20];
////	short price;
////};
////
//////int main()
//////{
//////	struct Book b1 = {"C programing", 25};
//////	printf("Book name: %s\n", b1.name);
//////	printf("price:RM%d\n", b1.price);
//////	b1.price = 20;
//////	printf("new price:RM%d\n", b1.price);
//////	struct Book* pb = &b1;
////////	b1.name[20] = "C++programing";
//////	(*pb).price = 21;
//////	printf("%s\n", (*pb).name);
//////	printf("%d\n", (*pb).price);
//////	return 0;
//////}
//
////int main()
////{
////	double d = 3.14;
////	double* pd = &d;
////	int a = 10;
////	printf("%d\n", sizeof(&a));
////	int* p = &a;
////	printf("%d\n", sizeof(p));
////	*pd = 5.33;
////	printf("%d\n", sizeof(pd));
//////	printf("%lf\n", d);
//////	printf("%lf\n", *pd);
////	return 0;
////}
// 
////int main()
////{
////	
////	int a = 10;
////	int* p = &a;
////	*p = 20;
////	printf("%d\n", a);
////	printf("%p\n", p);
////	return 0;////}
