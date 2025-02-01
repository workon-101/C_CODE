#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//int main()
//{
//	float f = 5.5;
//	
//	return 0;
//}

int main()
{
	int n = 9;
	float* pfloat = (float*)&n;
	printf("n = %d\n", n);
	printf("*pfloat = %f\n", *pfloat);
	
	*pfloat = 9.0;
	printf("num = %d\n", n);
	printf("*ploat = %f\n", *pfloat);
	return 0;
}

//int main()
//{
//	double d = 1E10;
//	printf("%lf\n", d);
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i = 0;
//	for(i=0; i<1000; i++)
//	{
//		a[i] = -1-i;
//	}
//	printf("%d\n", strlen(a));
//	return 0;
//}

//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i+j);
//	return 0;
//}

//int main()
//{
//	char a = 129;
//	printf("%u\n", a);
//	return 0;
//}
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a = %d, b = %d, c = %d\n", a, b, c);
//	return 0;
//}

//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//
//int main()
//{
//	int ret = check_sys;
//	if(ret == 1)
//	{
//		printf("small system\n");
//	}
//	else
//	{
//		printf("large system\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 20;
//	char b = (char)a;
//	if(b == 00)
//	{
//		printf("is dai\n");
//	}
//	else if(b == 20)
//	{
//		printf("is small\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 1-1;
//	return 0;
//}

//int main(void)
//{
//	int a = 20;
//	int b = -10;
//	return 0;
//}

//void test(void)
//{
//	printf("hehe\n");
//}
//
//int main(void)
//{
//	int a = 10;
//	float f = 10.0;
//	test();
//	return 0;
//}

//int main()
//{
//	srand((unsigned int)time(NULL));
//	int i = 0;
//	int n = 0;
//	for(i=0; i < rand()%4+1; i++)
//	{
//		n = rand()%9000+1000;
//	}
//	
//	printf("%d\n", n);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for(i=0; i<=12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for(i=0; i<100; i++)
//	{
//		printf("%d\n", i);
//	}
//	system("pause");
//	return 0;
//}
