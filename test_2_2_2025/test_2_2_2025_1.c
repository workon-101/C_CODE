#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a[3][4] = {0};
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(a[0][0]));
	printf("%d\n", sizeof(a[0]));
	printf("%d\n", sizeof(a[0] + 1));
	printf("%d\n", sizeof(*(a[0] + 1)));
	printf("%d\n", sizeof(a + 1));
	printf("%d\n", sizeof(*(a + 1)));
	printf("%d\n", sizeof(&a[0] + 1));
	printf("%d\n", sizeof(*(&a[0] + 1)));
	printf("%d\n", sizeof(*a));
	printf("%d\n", sizeof(a[3]));
	return 0;
}

//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", strlen(p));         //6
//	printf("%d\n", strlen(p + 1));     //5
////	printf("%d\n", strlen(*p));        //x
////	printf("%d\n", strlen(p[0]));      //x
//	printf("%d\n", strlen(&p));        //?
//	printf("%d\n", strlen(&p + 1));    //?
//	printf("%d\n", strlen(&p[0] + 1)); //5
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));           //4/8
//	printf("%d\n", sizeof(p + 1));       //4/8
//	printf("%d\n", sizeof(*p));          //1
//	printf("%d\n", sizeof(p[0]));        //1
//	printf("%d\n", sizeof(&p));          //4/8
//	printf("%d\n", sizeof(&p + 1));      //4/8
//	printf("%d\n", sizeof(&p[0] + 1));   //4/8
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));         //6
//	printf("%d\n", strlen(arr + 0));     //6
//	printf("%d\n", strlen(*arr));        //x
//	printf("%d\n", strlen(arr[1]));      //x
//	printf("%d\n", strlen(&arr));        //6
//	printf("%d\n", strlen(&arr + 1));    //?
//	printf("%d\n", strlen(&arr[0] + 1)); //5
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));          //7
//	printf("%d\n", sizeof(arr + 0));      //4/8
//	printf("%d\n", sizeof(*arr));         //1
//	printf("%d\n", sizeof(arr[1]));       //1
//	printf("%d\n", sizeof(&arr));         //4/8
//	printf("%d\n", sizeof(&arr + 1));     //4/8
//	printf("%d\n", sizeof(&arr[0] + 1));  //4/8
//	return 0;
//	
//}

//int main()
//{
//	char arr[6] = {'a','b','c','d','e','f'};
//	printf("%d\n", strlen(arr));         //?
//	printf("%d\n", strlen(arr + 0));     //?
////	printf("%d\n", strlen(*arr));        //x
////	printf("%d\n", strlen(arr[1]));      //x
//	printf("%d\n", strlen(&arr));        //?
//	printf("%d\n", strlen(&arr + 1));    //?
//	printf("%d\n", strlen(&arr[0] + 1)); //?
//	return 0;
//}

//int main()
//{
//	char arr[6] = {'a','b','c','d','e','f'};
//	printf("%d\n", sizeof(arr));          //6
//	printf("%d\n", sizeof(arr + 0));      //4/8
//	printf("%d\n", sizeof(*arr));         //1
//	printf("%d\n", sizeof(arr[1]));       //1
//	printf("%d\n", sizeof(&arr));         //4/8
//	printf("%d\n", sizeof(&arr + 1));     //4/8
//	printf("%d\n", sizeof(&arr[0] + 1));  //4/8
//	return 0;
//}

//int main()
//{
//	int a[4] = {1,2,3,4};
//	printf("%d\n", sizeof(a));         //16
//	printf("%d\n", sizeof(a + 0));     //4/8
//	printf("%d\n", sizeof(*a));        //4
//	printf("%d\n", sizeof(a + 1));     //8/4
//	printf("%d\n", sizeof(a[1]));      //4
//	printf("%d\n", sizeof(&a));        //4/8
//	printf("%d\n", sizeof(*&a));       //16
//	printf("%d\n", sizeof(&a + 1));    //4/8
//	printf("%d\n", sizeof(&a[0]));     //4/8
//	printf("%d\n", sizeof(&a[0] + 1)); //4/8
//	
//	return 0;
//}

//int compar(const void* e1, const void* e2)
//{
//	return (int)(*(int*)e1 - *(int*)e2);
//}
//
//void Swap(char* c1, char* c2, int width)
//{
//	int i = 0;
//	for(i=0; i<width; i++)
//	{
//		char tmp = *c1;
//		*c1 = *c2;
//		*c2 = tmp;
//		c1++;
//		c2++;
//	}
//}
//
//void b(void* arr, int num, int width, int (*compar)(const void*, const void*))
//{
//	int i = 0;
//	int j = 0;
//	for(i=0; i<num-1; i++)
//	{
//		for(j=0; j<num-1-i; j++)
//		{
//			if(compar((char*)arr+j*width, (char*)arr+(j+1)*width) > 0)
//			{
//				Swap((char*)arr+j*width, (char*)arr+j*width, width);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = {9,8,7,6,5,4,3,2,1,0};
//	int num = sizeof(arr)/sizeof(arr[0]);
//	b(arr, num, sizeof(arr[0]), compar);
//	int i = 0;
//	for(i=0; i<num; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return (int)(((struct Stu*)e1)->age - ((struct Stu*)e2)->age);
//}
//
//cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//void test()
//{
//	struct Stu s[3] = {{"ggg", 18}, {"aa", 45}, {"ccf", 8}};
//	int sz = sizeof(s)/sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", (s[i]).age);
//		printf("%s\n", (s[i]).name);
//	}
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//int Compar(const void* a, const void* b)
//{
//	return (*(int*)a - *(int*)b);
//}
//
//int main()
//{
//	float arr[10] = {8.9,5.6,7.32,6.47,5.4,7.623,4.9,0.0,7.8,2.66};
//	unsigned int sz = sizeof(arr)/sizeof(arr[0]);
//	qsort(arr, sz, sizeof(int), Compar);
//	int i = 0;
//	for(i=0; i < 10; i++)
//	{
//		printf("%f ", arr[i]);
//	}
//	return 0;
//}

//int compare (const void * a, const void * b)
//{
//	return ( *(int*)a - *(int*)b );
//}
//
//int main ()
//{
//	int values[] = { 40, 10, 100, 90, 20, 25 };
//	int n;
//	qsort (values, 6, sizeof(values[0]), compare);
//	for (n=0; n<6; n++)
//	printf ("%d ",values[n]);
//	return 0;
//}

//int Compar(const void* a, const void* b)
//{
//	if ( *(float*)a <  *(float*)b ) return -1;
//	if ( *(float*)a == *(float*)b ) return 0;
//	if ( *(float*)a >  *(float*)b ) return 1;
//}
//
//int main()
//{
//	float arr[10] = {8.9,5.6,7.32,6.47,5.4,7.623,4.9,0.0,7.8,2.66};
////	unsigned int num = sizeof(arr)/sizeof(arr[0]);
////	int (*pCompar)(const void*, const void*) = Compar;
//	qsort(arr, 10, sizeof(arr), Compar);
//	int i = 0;
//	for(i=0; i < 10; i++)
//	{
//		printf("%f ", arr[i]);
//	}
//	return 0;
//}

//void bubble_sort(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int i = 0;
//	int j = 0;
//	for(i = 0; i < sz-1; i++)
//	{
//		for(j=0; j<sz-1-i; j++)
//		{
//			if(arr[j] > arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = {9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int main()
//{
////	int* arr[10];
////	int (*arr2)[10] = &arr;
//	int (*paAdd)(int, int) = Add;
////	printf("%d\n", paAdd(1, 2));
//	int (*parr[10])(int, int);
//	int (*(*pparr)[10])(int, int) = &parr;
//	return 0;
//}

//void print(char* str)
//{
//	printf("hehe %s\n", str);
//}
//
//void test(void (*p)(char*))
//{
//	printf("test\n");
//	p("world");
//}
//
//int main()
//{
//	test(print);
//	return 0;
//}

//void menu()
//{
//	printf("************************\n");
//	printf("**  1.add      2.sub  **\n");
//	printf("**  3.mul      4.div  **\n");
//	printf("**       0.exit       **\n");
//	printf("************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int Sub(int x, int y)
//{
//	return x-y;
//}
//
//int Mul(int x, int y)
//{
//	return x*y;
//}
//
//int Div(int x, int y)
//{
//	return x/y;
//}
//
//int f(int x, int y)
//{
//	return x%y;
//}
//
//int main()
//{
//	int input = 0;
//	int a = 0;
//	int b = 0;
//	int (*pfArr[5])(int, int) = {0, Add, Sub, Mul, Div};
//	do
//	{
//		menu();
//		printf("pleses choose :>");
//		scanf("%d", &input);
//		if(input >= 1 && input <=4)
//		{
//			printf("pleses scan two numble:>");
//			scanf("%d%d", &a, &b);
//			int ret = pfArr[input](a, b);
//			printf("%d\n", ret);
//		}
//		else if(input == 0)
//		{
//			printf("exit\n");
//		}
//		else
//		{
//			printf("choose is wrong\n");
//		}
//	}
//	while(input);
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	int a = 0;
//	int b = 0;
//	do
//	{
//		printf("pleses scan two numble:>");
//		scanf("%d%d", &a, &b);
//		menu();
//		printf("pleses choose :>");
//		scanf("%d", &input);
//		switch(input)
//		{
//			case 1:
//				printf("ans = %d\n", Add(a, b));
//				break;
//			case 2:
//				printf("ans = %d\n", Sub(a, b));
//				break;
//			case 3:
//				printf("ans = %d\n", Mul(a, b));
//				break;
//			case 4:
//				printf("ans = %d, %d\n", Div(a, b), f(a, b));
//				break;
//			case 0:
//				printf("exit\n");
//				break;
//			default:
//				printf("choose is wrong\n");	
//		}
//	}
//	while(input);
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//
//}
//
//int main()
//{
//	char* (*pf)(char*, const char*) = my_strcpy;
//	char* (*pfArr[4])(char*, const char*);
//	int i = 0;
//	for(i=0; i<4; i++)
//	{
//		 pfArr[i] = pf;
//	}
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int Sub(int x, int y)
//{
//	return x-y;
//}
//
//int Mul(int x, int y)
//{
//	return x*y;
//}
//
//int Div(int x, int y)
//{
//	return x/y;
//}
//
//int main()
//{
//	int (*arr[4])(int, int) = {Add, Sub, Mul, Div};
//	int i = 0;
//	for(i=0; i<4; i++)
//	{
//		printf("%d\n", arr[i](2, 3));
//	}
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//	int(*p)(int, int) = Add;
//	printf("%d\n", p(a, b));
//	
//	return 0;
//}

//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//	void (*p)(char*) = Print;
//	(*p)("hello world");
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int (* p)(int, int) = Add;
//	printf("%p\n", Add);
//	printf("%p\n", p);
//	printf("%d\n", (*p)(a, b));
////	printf("%p\n", &Add);
////	printf("%p\n", Add);
////	int ret = Add(a, b);
////	printf("%d\n", ret);
//	return 0;
//}

//void test(int** p)
//{
//}
//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** pp = &p;
//	test(&p);
//	test(pp);
//	int* arr[10];
//	test(arr);
//	
//	return 0;
//}

//void test1(int* p)
//{
//}
//
//
//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	test1(&a);
//	test1(p);
//	return 0;
//}

//void test(int arr[3][5])
//{}
//
//void test1(int arr[][5])
//{}
//
//void test2(int arr[3][])
//{}

//void test(int(* arr)[5])
//{
//}
//
//int main()
//{
//	int arr[3][5] = {0};
//	
//	test(arr);
////	test1(arr);
////	test2(arr);
////	test3(arr);
////	test4(arr);
//	
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";
//	int* arr1[10];
//	int (*arr2)[10];
//	char* ch1[ch];
//	char (*ch)[10];
//	return 0;
//}

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int* p = arr;
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	return 0;
//}

//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for(i=0; i<x; i++)
//	{
//		for(j=0; j<y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print2(int (*p)[5], int x, int y)
//{
//	int i = 0;
//	for(i=0; i<x; i++)
//	{
//		int j = 0;
//		for(j=0; j<y; j++)
//		{
//			printf("%d ",*(*(p+i)+j));
//		}
//		printf("\n");
//		
//	}
//}
//
//int main()
//{
//	int arr[3][5] = {{1,2,3,4,5}, {2,3,4,5,6}, {3,4,5,6,7}};
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
//}

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int* p = arr;
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
////	int (*pa)[10] = &arr;
////	int i = 0;
////	for(i=0; i<10; i++)
////	{
////		printf("%d ", *(*pa+i));
////	}
////	for(i=0; i<10; i++)
////	{
////		printf("%d ", (*pa)[i]);
////	}
////	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char*(*pa)[5] = &arr;
//	return 0;
//}

//int main()
//{
////	int* P = NULL;
////	char* pc = NULL;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int (*p)[10] = &arr;
//	return 0;
//}

//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {2,3,4,5,6};
//	int arr3[] = {3,4,5,6,7};
//	int* parr[] = {arr1, arr2, arr3};
//	int i = 0;
//	for(i=0; i<3; i++)
//	{
//		int j = 0;
//		for(j=0; j<5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = {&a, &b, &c, &d};
//	int i = 0;
//	for(i=0; i<4; i++)
//	{
//		printf("%d\n", *(arr[i]));
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = {0};
//	char ch[5] = {0};
//	int* parr[4];
//	char* pch[5];
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	if(p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
////	if(arr1 == arr2)
////	{
////		printf("hehe\n");
////	}
////	else
////	{
////		printf("haha\n");
////	}
//	return 0;
//}

//int main()
//{
//	const char* pc = "abcdef";
////	*pc = 'm';
//	printf("%s\n", pc);
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//}

//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//}
//
//int main()
//{
//	int arr[10] = {0};
//	test(arr);
//	return 0;
//}
