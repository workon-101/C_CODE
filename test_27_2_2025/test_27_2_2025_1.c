#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int a = 3;
	int b = (a++, a++);
	printf("%d %d", a, b);
	
//	intS x=1.13, y=0.77;
//	int i = 0;
//	while(i < 10 && y)
//	{
//		i++;
//		printf("%d\n", i);
//	}
//	printf("%d,%d\n", !x, !y);
//	printf("%f, %f", !x, !y);
//	int a=1, b=2, c;
//	c = (a++, a+= b, a+b+1);
//	
//	printf("%d %d %d", a, b, c);
//	int i = 6, k = 6, j = 6, h = 6, m, n, x, y;
//	m = i++;
//	n = ++j;
//	x = k--;
//	y = --h;
//	printf("%d %d %d %d \n%d %d %d %d\n", i, m, j, n, k, x, h, y);
//	int a = 100;
//	int b = (a-32) * 5/9;
//	printf("%dF == %dC\n", a, b);
	return 0;
}

//int main(int argc, char *argv[]) {
//	int n = 0;
//	scanf("%d", &n);
//	if(n>0 && n<=1000)
//	{
//		if(n % 2 == 0)
//			printf("2\n");
//		else
//			printf("1\n");
//	}
//	else
//		printf("wrong numble\n");
//	return 0;
//}
